#ifndef IMAGE_H_
#define IMAGE_H_

#include <memory>
#include <string>

class Image{

    public:
    Image(size_t _width, size_t _height, size_t _depth = 3);
    // make sure this can't be copied
    Image(const Image &) = delete;
    Image & operator = (const Image &) = delete;

    void setPixel(size_t _x, size_t _y,
                  unsigned char _r,
                  unsigned char _g,
                  unsigned char _b);
    void clearScreen(unsigned char _r,
                     unsigned char _g,
                     unsigned char _b);

    bool save(const std::string &_fname) const;


    private:
    size_t m_width; //!<  width of image
    size_t m_height; //!< height of image
    size_t m_pixelDepth = 3; //!< pixel depth default
    std::unique_ptr<unsigned char [] > m_data;
};

#endif
