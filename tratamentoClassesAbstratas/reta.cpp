#include <iostream>
#include "reta.h"

using namespace std;

Reta::Reta(int x0,int y0, int x1,int y1){
    if((x0!=x1) && (y0!=y1)){ //verifica se os dois pontos sao diferentes
        this->x0 = x0;
        this->y0 = y0;
        this->x1 = x1;
        this->y1 = y1;
    } else{
        throw "foram inseridos dois pontos com coordenadas iguais";
    }
}

void Reta::draw(Screen &t){
    int i,j;
    for(float a=0.0; a < 1; a+=0.01){ //a = coeficiente angular da reta
        i =(int) (x0 + a*(x1-x0));
        j =(int) (y0 + a*(y1-y0));
        t.setPixel(i,j);
    }
}
