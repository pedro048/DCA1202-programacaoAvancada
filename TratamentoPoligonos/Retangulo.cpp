#include "Ponto.h"
#include "Poligono.h"
#include "Retangulo.h"

using namespace std;

Retangulo::Retangulo(){
    delete [] p;
    p = new Ponto[4];
}

Retangulo::~Retangulo(){
    delete [] p;
}

Retangulo::Retangulo(float x, float y, float largura, float altura){
    delete [] p;
    p = new Ponto[4];

    l = largura;
    h = altura;

    Vertices(x,y);
    Vertices(x, y-h);
    Vertices(x+l, y-h);
    Vertices(x+l, y);
}
