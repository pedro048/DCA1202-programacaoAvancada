#ifndef FIGURAGEOMETRICA_H_INCLUDED
#define FIGURAGEOMETRICA_H_INCLUDED
#include "screen.h"

class FiguraGeometrica{ //classe abstrata (nao pode instanciar objetos)
public:
    FiguraGeometrica();
    virtual void draw(Screen &t)=0; //todas as classes herdeiras implentam esse metodo
    void setBrush();
    char getBrush();
private:
    char brush;
};


#endif // FIGURAGEOMETRICA_H_INCLUDED
