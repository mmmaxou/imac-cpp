#include <algorithm> // min
#include <cmath>

#include "ImageRGBU8.hpp"


ImageRGBU8::ImageRGBU8() : _width(0), _height(0)
{
}


ImageRGBU8::ImageRGBU8(const unsigned int w, const unsigned int h)
 : _width(w), _height(h), _data(std::vector<unsigned char>(w*h*3))
{
    // fill with the default color
    std::fill(_data.begin(), _data.end(), 255);
}


ImageRGBU8::ImageRGBU8(const unsigned int w,const unsigned int h, const std::vector<unsigned char> data)
: _width(w), _height(h), _data(data)
{
    if(_width*_height*3 != _data.size())
        std::cerr << "ImageRGBU8 : error : constuctor from vector : invalide vector size." << std::endl;
}


ImageRGBU8::~ImageRGBU8()
{
}


void ImageRGBU8::toGreyScale() {
    for(unsigned int i=0; i<_width*_height*3; i+=3) {
        unsigned char moy = (int(_data[i])+int(_data[i+1])+int(_data[i+2]))/3;
        _data[i] = _data[i+1] = _data[i+2] = moy;
    }
}


void ImageRGBU8::drawCircle(const unsigned char r, const unsigned char g, const unsigned char b)
{
    int radius = std::min(_width,_height) / 2;
    int squaredRadius = radius * radius;
    int centerX = _width / 2;
    int centerY = _height / 2;

    // fill the circle
    for(int x=0; x<(int)_width; ++x)
        for(int y=0; y<(int)_height; ++y)
            if( (x-centerX)*(x-centerX) + (y-centerY)*(y-centerY) < squaredRadius ){
                (*this)(x,y,0) = r;
                (*this)(x,y,1) = g;
                (*this)(x,y,2) = b;
            }
}


void ImageRGBU8::removeChannel(const unsigned int channel)
{
    for(int x=0; x<(int)_width; ++x)
        for(int y=0; y<(int)_height; ++y)
            (*this)(x,y,channel) = 0;
}


void ImageRGBU8::threshold(const unsigned char threshold)
{
    for(unsigned int i=0; i<_width*_height*3; i+=3){
        unsigned char value = (int(_data[i]) + int(_data[i+1]) + int(_data[i+2])) / 3;
        if(value < threshold)
            _data[i] = _data[i+1] = _data[i+2] = 0;
        else
            _data[i] = _data[i+1] = _data[i+2] = 255;
    }
}

void ImageRGBU8::mean(const unsigned int kernelSize) {
    if (kernelSize < 3) {
        throw std::invalid_argument("The kernel size must be between 3 and" + std::to_string(std::min(_width, _height) -1));
    }
    if (kernelSize % 2 == 0) {
        throw std::invalid_argument("The kernel size must be an odd number: Given:" + std::to_string(kernelSize));
    }

    // W = 802
    // H = 834

    unsigned int range = (kernelSize-1)/2;
    std::cout << "Range: " << range << std::endl;
    int cpt=0;
    std::vector<unsigned char> nouveau(_width*_height*3);

    for(size_t i=0; i<_width-0; i++) {
        for(size_t j=0; j<_height-0; j++) {
            // On parcours chaque pixels de l'intérieur de l'image sans se soucier des contours

            int sumR=0, sumG=0, sumB=0;
            int divider=0;
            int spaceWR, spaceHR;

            spaceWR = _width-i;
            spaceHR = _height-j;
            // std::cout << "nRange = " << nRange << "| WR:" << spaceWR << " | WL:" << spaceWL << " | HL:" << spaceHL << " | HR:" << spaceHR <<std::endl;

            int minL = std::min(i, j);
            int minR = std::min(spaceWR, spaceHR);

            unsigned int min = std::min(minL, minR);
            int nRange = std::min(range, min);
            //std::cout << nRange;

            try {
                if (nRange != 0) {
                    for (int x=-nRange; x<nRange; x++) {
                        for(int y=-nRange; y<nRange; y++) {
                            // On ajoute les voisins
                            divider++;
                            cpt++;
                            sumR += (*this)(i+x, j+y, 0);
                            sumG += (*this)(i+x, j+y, 1);
                            sumB += (*this)(i+x, j+y, 2);
                        }
                    }
                }
            } catch (std::exception &e) {
                std::cerr << "Error:" << e.what() << "| nRange = " << nRange << " | i:" << i << " | j:" << j << std::endl;
            }
            if ( divider != 0 ) {
                nouveau[(j*_width+i)*3+0] = sumR / divider;
                nouveau[(j*_width+i)*3+1] = sumG / divider;
                nouveau[(j*_width+i)*3+2] = sumB / divider;
            }
        }
    }
    _data = nouveau;

    std::cout << "CPT: " << cpt << std::endl;
}