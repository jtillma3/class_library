Image::Image(int numRows, int numCols, int maxGray){
    rows = numRows;
    cols = numCols;
    maxGrayLevel = maxGray;
    pixels = NULL;
}

Image::Image(){
    rows = 0;
    cols = 0;
    maxGrayLevel = 0;
    pixels = NULL;
}

Image::Image(const Image& oldImage){
    rows = oldImage.rows;
    cols = oldImage.cols;
    maxGrayLevel = oldImage.maxGrayLevel;
    pixels = new Int
}

Image::operator=(Image &rhs){


}

Image::~Image(){




}

void Image::setImageInfo(int r, int c, int g){


}



void Image::getImageInfo(int& r, int& c, int& g){




}

int Image::getPixelValue(int r, int c){



}

void Image::setPixelValue(int r, int c, int v){

}


bool Image::inBounds(int r, int c){

}
void Image::getSubImage(int uR, int uC, int lR, int lC, Image& oldImage){

}
void Image::enlargeImage(int v, Image& oldImage){

}
void Image::enlargeImage(float s,Image& oldImage){


}
void Image::shrinkImage(float s,Image& oldImage){


}

void Image::shrinkImage(int v, Image& oldImage){

}
void Image::reflectImage(bool d, Image& oldImage){

}

void Image::translateImage(int h, int v, Image& oldImage){ /****We can do better than this, think multidimensional*****/

}

void Image::translateImage(float h,float v, Image& oldImage){

}

void Image::rotateImage(int t, Image& oldImage){

}
Image Image::operator+(const Image& oldImage){

}

Image Image::operator-(const Image& oldImage){

}



Image Image::calculateIntegral(void){



}