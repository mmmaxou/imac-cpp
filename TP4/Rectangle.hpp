#ifndef RECTANGLE_IMAC_HPP__
#define RECTANGLE_IMAC_HPP__

class Rectangle {  
  public:
    Rectangle();
    Rectangle(const double &w, const double &h);
    ~Rectangle();
  
    inline double getWidth() const { return _width; };
    inline double getheight() const { return _height; };
  
    inline void setWidth(const double &w) { _width = w; };
    inline void setheight(const double &h) { _height = h; };
  
    inline const double surface() const { return _width * _height; };
    
    std::string whoAmI() const;
  
  protected:
    double _width;
    double _height;  
};

#endif