#include <iostream>
#include <cmath>
#include "circulo.h"

using namespace std;

Circulo::Circulo(int x, int y, int r, int p){
    if(r>=0){
        this->r = r;
        this->x = x;
        this->y = y;
        preenchimento = p;
    }else{
        throw "precisa colocar um raio positivo";
    }
}

void Circulo::draw(Screen &t){
    float dist_ponto; //distancia entre dois pontos
    if(preenchimento==0){ //sem preenchimento
        for(int i=0; i<t.getNlin(); i++){
            for(int j=0; j<t.getNcol(); j++){
                dist_ponto = sqrt(pow(i-x, 2) + pow(j-y, 2));

                if(ceil(dist_ponto) == r ){ //verifica se a distancia entre o ponto (i,j) e o centro do circulo é próxima ao raio
                    t.setPixel(i,j);
                }
            }
        }
    } else {
        for(int i=0; i<t.getNlin(); i++){
            for(int j=0; j<t.getNcol(); j++){
                if(sqrt(pow(i-x, 2) + pow(j-y, 2)) <= r){ //verifica se a distancia entre o ponto (i,j) e o centro do circulo é menor ou igual ao raio
                    t.setPixel(i,j);
                }
            }
        }
    }
}

int Circulo::getX(){
    return x;
}

int Circulo::getY(){
    return y;
}

int Circulo::getR(){
    return r;
}
