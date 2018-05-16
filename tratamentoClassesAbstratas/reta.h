#ifndef RETA_H_INCLUDED
#define RETA_H_INCLUDED

#include "figuraGeometrica.h"

class Reta: public FiguraGeometrica{
private:
    int x0,y0,x1,y1;
public:
    Reta(int x0,int y0, int x1,int y1);
    void draw(Screen &t);
};


#endif // RETA_H_INCLUDED
