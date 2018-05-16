#include "screen.h"
#include <vector>

Screen::Screen(){
}

void Screen::dimen(int x, int y){
    this->nlin = x;
    this->ncol = y;
    //dando dimensao a mat
    mat.resize(x);
    for(int i=0; i<x; i++){
        mat[i].resize(y);
    }
    //primeiro preenchimento
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            mat[i][j] = ' ';
        }
    }

}

int Screen::getNlin(){
    return nlin;
}

int Screen::getNcol(){
    return ncol;
}

void Screen::setPixel(int x, int y){
    mat[x][y] = brush;
}

void Screen::clear(){
    for(int i=0; i<nlin; i++){
        for(int j=0; j<ncol; j++){
            mat[i][j] = ' ';
        }
    }
}

void Screen::setBrush(char brush){
    this->brush = brush;
}

ostream &operator<<(ostream &os, Screen &t){

    for(int i=0; i<t.nlin; i++){
        for(int j=0; j<t.ncol; j++){
            os<<t.mat[i][j]<<' ';
        }
        os<<endl;
    }
}




