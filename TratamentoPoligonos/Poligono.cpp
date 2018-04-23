#include <iostream>
#include <cmath>
#include "Ponto.h"
#include "Poligono.h"
#define PI 3.1415926535897932384626433832795

using namespace std;

Poligono::Poligono(){
    p = new Ponto[100];
}
Poligono::~Poligono(){
    delete [] p;
}

void Poligono::Vertices(float px, float py){
    p[numVert].setX(px);
    p[numVert++].setY(py);
}
int Poligono::numVertices(){
    return numVert;
}

float Poligono::area(){
    float A=0.0;
    for(int i=0; i<numVert-1; i++){
        A += (p[i].getX()*p[i+1].getY() - p[i+1].getX()*p[i].getY());
    }
    //fazendo a operacao com os pontos da ultima aresta: p[numVert] e p[0]
    A += (p[numVert-1].getX()*p[0].getY() - p[0].getX()*p[numVert-1].getY());
    return (A/2);
}
void Poligono::translada(float a1, float a2){
    for(int i=0; i<numVert; i++){
        p[i].translada(a1,a2); //soma todos os vertices ao ponto (a1,a2)
    }
}

/*Fórmula usada para a rotacao
novoX = eixoX + (pontoX - eixoX) * Math.cos(angulo) - (pontoY - eixoY) * Math.sin(angulo);
novoY = eixoY + (pontoX - eixoX) * Math.sin(angulo) + (pontoY - eixoY) * Math.cos(angulo);
*/
void Poligono::rotaciona(Ponto eixo, float angle){
    float co = cos(angle*PI/(float)180.0);
    float se = sin(angle*PI/(float)180.0);
    float xEixo, yEixo, xPonto ,yPonto;

    for(int i=0; i<numVert; i++){
        xEixo = eixo.getX();
        yEixo = eixo.getY();
        xPonto = p[i].getX();
        yPonto = p[i].getY();

        p[i].setX(xEixo + co*(xPonto - xEixo) - se*(yPonto - yEixo));
        p[i].setY(yEixo + se*(xPonto - xEixo) + co*(yPonto - yEixo));
    }
}

void Poligono::imprime(){
    for(int i=0; i<numVert; i++){
        p[i].imprime();
        cout<<" -> ";
    }
    p[0].imprime();
}

Ponto Poligono::centroMassa(){
    float cx=0.0, cy=0.0, x0=0.0, y0=0.0, x1=0.0, y1=0.0;
    float seisArea = 6*area();
    for(int i=0; i<numVert-1; i++){
        x0 = p[i].getX();
        y0 = p[i].getY(); //ponto atual

        x1 = p[i+1].getX();
        y1 = p[i+1].getY(); //proximo ponto

        cx += (x0 + x1)*(x0 * y1 - x1 * y0);
        cy += (y0 + y1)*(x0 * y1 - x1 * y0);
    }

    //proxima iteracao deve ser com o primeiro e ultimo ponto: p[numVert-1] e p[0]
    x0 = p[numVert-1].getX();
    y0 = p[numVert-1].getY();

    x1 = p[0].getX();
    y1 = p[0].getY();

    cx += (x0 + x1)*(x0 * y1 - x1 * y0);
    cy += (y0 + y1)*(x0 * y1 - x1 * y0);

    cx = cx/seisArea;
    cy = cy/seisArea;
    Ponto centro(cx, cy);
    return centro;
}


