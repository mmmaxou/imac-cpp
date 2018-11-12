#ifndef FIGURE_IMAC_HPP__
#define FIGURE_IMAC_HPP__

class Figure {  
  public:  
    inline double getWidth() const { return _width; };
    inline double getheight() const { return _height; };
  
    inline void setWidth(const double &w) { _width = w; };
    inline void setheight(const double &h) { _height = h; };
  
    virtual inline
      const double surface() const =0;
  
    virtual
      std::string whoAmI() const =0;
  
  protected:
    double _width;
    double _height;  
};

#endif