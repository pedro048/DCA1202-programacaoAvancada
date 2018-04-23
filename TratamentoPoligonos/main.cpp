#include <iostream>
#include "Ponto.h"
#include "Poligono.h"
#include "Retangulo.h"

using namespace std;

int main(){

    Retangulo r(0.0, 0.0, 4.0, 3.0);
    cout<<"\n\n\n";
    cout<<"Estrutura poligonal do retangulo: "<<endl;
    r.imprime();
    cout<<"\n\n";
    cout<<"Area do retangulo: "<<r.area()<<endl;
    cout<<"......................................................................................"<<endl;
    r.translada(-3.0,4.0);
    cout<<"Estrutura poligonal do retangulo transladado: "<<endl;
    r.imprime();
    cout<<"\n\n";
    cout<<"Area do retangulo transladado: "<<r.area()<<endl;
    cout<<"......................................................................................"<<endl;
    Ponto p = r.centroMassa();
    cout<<"Centro de massa do retangulo: "<<endl;
    p.imprime();
    cout<<"\n\n";
    r.rotaciona(p, 30);
    cout<<"Estrutura poligonal do retangulo rotacionado, de 30 graus, em torno do centro de massa: "<<endl;
    r.imprime();
    cout<<"\n\n";
    cout<<"Area do retangulo rotacionado: "<<r.area()<<endl;
    return 0;

}
