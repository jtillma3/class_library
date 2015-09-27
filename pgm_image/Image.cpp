#include "Image.h"
#include <cstdio>
#include <cstdlib>

using namespace std;

enum image_error_code: unsigned short int{
IMAGE_SUCCESSFUL = 0,
IMAGE_PIXEL_OUT_OF_BOUNDS = 1,
IMAGE_PIXEL_INVALID_COLOR = 2,
IMAGE_ROW_PARAM_LESS_THAN_ZERO = 3,
IMAGE_COL_PARAM_LESS_THAN_ZERO = 4,
IMAGE_ILLEGAL_FUNCTION_CALL

};




Image::Image(int numRows, int numCols, unsigned short int maxGray){
    if (numRows < 0)  throw IMAGE_ROW_PARAM_LESS_THAN_ZERO;
    if (numCols < 0) throw IMAGE_COL_PARAM_LESS_THAN_ZERO;
    rows = numRows;
    columns = numCols;
    maxGrayLevel = maxGray;
    pixels = new short unsigned int*[rows]();
    int i;
    for(i = 0;i<rows;i++){
        pixels[i] = new short unsigned int[columns]();//taking advantage of auto initialization


    }
}

Image::Image(){
    rows = 0;
    columns = 0;
    maxGrayLevel = 0;
    pixels = NULL;
}

Image::Image(const Image& oldImage){
    rows = oldImage.rows;
    columns = oldImage.columns;
    maxGrayLevel = oldImage.maxGrayLevel;
    pixels = new unsigned short int*[rows]();
    int i;
    for(i=0;i<rows;i++){
        pixels[i] = new unsigned short int[columns]();
        int j;
        for(j = 0; j < columns; j++){
            pixels[i][j] = oldImage.getPixelValue(i,j);
        }
    }
}

Image::operator=(Image &rhs){
    /* Self Assignment safe */
    unsigned short int** old_pixels = pixels;
    int old_rows = rows;
    int old_columns = columns;
    rows = rhs.rows;
    columns = rhs.columns;
    pixels = new unsigned short int*[rows]();
    int i,j;
    for(i=0;i<rows;i++){
        pixels[i] = new unsigned short int[columns]();
        for(j=0;j<columns;j++){
            pixels[i][j] = rhs.getPixelValue(i,j);
        }
    }
    for(i=0;i<old_rows;i++){
        delete[] old_pixels[i];
    }
    delete old_pixels[];
}

Image::~Image(){
    int i,j;
    for(i=0;i<rows;i++){
        delete[] pixels[i];
    }
    delete[] pixels;
}

bool Image::inBounds(int r, int c){
    if ( ( r < 0 ) || ( r > rows ) ) return false;
    if ( ( c < 0 ) || ( c > columns ) ) return false;
    return true;
}
/** Deeming this function *ILLEGAL* currently***/
/**Not sure if the image should resize based on the params**/
image_error_code Image::setImageInfo(int r, int c, unsigned short int g){ 
    if(r < 0) return IMAGE_ROW_PARAM_LESS_THAN_ZERO;
    if(c < 0) return IMAGE_COL_PARAM_LESS_THAN_ZERO;
    return IMAGE_ILLEGAL_FUNCTION_CALL;
    rows = r;
    columns = c;
    maxGrayLevel = g;
    return IMAGE_SUCCESSFUL;
}



void Image::getImageInfo(int& r, int& c, unsigned short int& g){
    r = rows;
    c = columns;
    g = maxGrayLevel;
}

/**Calling this function without checking err will produce illegal values**/
unsigned short int Image::getPixelValue(int r, int c, image_error_code &err){
    if (!inBounds(r,c)){
        err = IMAGE_PIXEL_OUT_OF_BOUNDS;
        return 0; // Can't return out of bounds value, 0 should work
    }
    err = IMAGE_SUCCESSFUL;
    return pixels[r][c];
}

image_error_code Image::setPixelValue(int r, int c, int v){
    if(!inBounds(r,c)) return IMAGE_PIXEL_OUT_OF_BOUNDS;
    if( (v < 0) || (v > maxGrayLevel)) return IMAGE_PIXEL_INVALID_COLOR;
    pixels[r][c] = v;
    return IMAGE_SUCCESSFUL;
}



void Image::getSubImage(int uR, int uC, int lR, int lC, Image& oldImage){
    cout<<"Unimplemented function call"<<endl;
}

void Image::enlargeImage(int v, Image& oldImage){
cout<<"Unimplemented function call"<<endl;
}
void Image::enlargeImage(float s,Image& oldImage){

cout<<"Unimplemented function call"<<endl;
}
void Image::shrinkImage(float s,Image& oldImage){

cout<<"Unimplemented function call"<<endl;
}

void Image::shrinkImage(int v, Image& oldImage){
cout<<"Unimplemented function call"<<endl;
}
void Image::reflectImage(bool d, Image& oldImage){
cout<<"Unimplemented function call"<<endl;
}

void Image::translateImage(int h, int v, Image& oldImage){
cout<<"Unimplemented function call"<<endl;
}

void Image::translateImage(float h,float v, Image& oldImage){
cout<<"Unimplemented function call"<<endl;
}

void Image::rotateImage(int t, Image& oldImage){
cout<<"Unimplemented function call"<<endl;
}

Image Image::operator+(const Image& oldImage){
    cout <<"Unimplemented function call"<<endl;
    return Image();

}

Image Image::operator-(const Image& oldImage){
    cout <<"Unimplemented function call"<<endl;
    return Image();

}

Image Image::calculateIntegral(void){
    cout <<"Unimplemented function call"<<endl;
    return Image();


}