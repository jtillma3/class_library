/*
 * Purpose: This header defines the available methods for the pgm image class
 * Specification : http://netpbm.sourceforge.net/doc/pgm.html
 * Author: J. S. Tillman
 */

#ifndef IMAGE_H
#define IMAGE_H
class Image
{
    public:
        Image();
        Image(const Image& oldImage);
        Image(int r, int c, int g);
        Image (char * fileName);
        ~Image();
        void setImageInfo(int r, int c, int g);
        void getImageInfo(int& r, int& c, int& g);
        int getPixelValue(int r, int c);
        void setPixelValue(int r, int c, int v);
        bool inBounds(int r, int c);
        void getSubImage(int uR, int uC, int lR, int lC, Image& oldImage);
        void enlargeImage(int v, Image& oldImage);
        void enlargeImage(float s, Image& oldImage);
        void shrinkImage(int v, Image& oldImage);
        void shrinkImage(float s, Image& oldImage);
        void reflectImage(bool d, Image& oldImage);
        void translateImage(int v, int h, Image& oldImage); //Pixel translation
        void translateImage(float h, float v, Image& oldImage); //Scaled translation
        void rotateImage(int t, Image& oldImage);
        Image operator+(const Image& oldImage);
        Image operator-(const Image& oldImage);
        void negateImage(Image &oldImage);
        Image calculateIntegral(void){
    private:
        int rows;
        int columns;
        int maxGrayLevel;
        unsigned short int **pixels; 
    };
#endif