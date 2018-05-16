#include <iostream>
#include "retangulo.h"

using namespace std;

Retangulo::Retangulo(int x, int y, int l, int h){
    if(l>0 && h>0){ //verifica se a largura e altura sao maiores que zero
        this->l = l;
        this->h = h;
        this->x = x;
        this->y = y;
    }else{
        throw "largura e altura precisam ser positivos";
    }
}

void Retangulo::draw(Screen &t){
    for(int i=y; i<h+y; i++){ //percorre screen de y até y+h
        for(int j=x; j<l+x; j++){ //percorre screen de x até x+l
            t.setPixel(i,j);
        }
    }
}

int Retangulo::getX(){
    return x;
}

int Retangulo::getY(){
    return y;
}

int Retangulo::getL(){
    return l;
}

int Retangulo::getH(){
    return h;
}
