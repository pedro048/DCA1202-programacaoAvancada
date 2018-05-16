#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED

#include "figuraGeometrica.h"

class Circulo: public FiguraGeometrica{
private:
    int x,y; //centro do círculo
    int r; //raio
    bool preenchimento;
public:
    Circulo(int x, int y, int r, int p);
    void draw(Screen &t);
    int getX();
    int getY();
    int getR();
    int getP();

};

#endif // CIRCULO_H_INCLUDED
