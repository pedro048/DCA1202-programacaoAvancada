#include <iostream>
#include <math.h>
#include <iomanip> // para usar fixed, precision()
#include "Ponto.h"

using namespace std;

Ponto::Ponto(){
//cout<<"Ponto criado "<<endl;
}
Ponto::~Ponto(){
//cout<<"Ponto destruido "<<endl;
}
Ponto::Ponto(float a1, float a2){
    x=a1;
    y=a2;
}
void Ponto::setX(float px){
    x = px;
}
float Ponto::getX(){
    return x;
}
void Ponto::setY(float py){
    y = py;
}
float Ponto::getY(){
    return y;
}
void Ponto::setXY(float px, float py){
    x = px;
    y = py;
}
void Ponto::add(Ponto p1){
    x += p1.x;
    y += p1.y;
}
void Ponto::sub(Ponto p1){
     x -= p1.x;
     y -= p1.y;
}
float Ponto::norma(){
    return (sqrt(pow(x,2) + pow(y,2)));
}
void Ponto::translada(float a1, float a2){
    x+=a1;
    y+=a2;
}
void Ponto::imprime(){
    cout<<fixed;
    cout.precision(1);
    cout<<"("<< x <<", "<< y <<")";
}
