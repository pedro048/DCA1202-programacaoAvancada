#ifndef SCREEN_H_INCLUDED
#define SCREEN_H_INCLUDED

#include <vector>
#include <fstream>

using namespace std;

class Screen{
private:
  // armazenam o tamanho da tela de desenho
  // numero de linhas e de colunas
  int nlin, ncol;

  // guarda o caractere usado para desenhar
  char brush;

  // armazena a matriz da tela
  vector< vector<char> > mat;
public:
  // construtor padrao da classe
  Screen();

  //dimensiona a matriz de caracteres
  void dimen(int x, int y);

  int getNlin(); //recupera número de linhas
  int getNcol(); //recupera número de colunas

  // desenha um pixel da matriz usando o caratere
  // guardado em 'brush'
  void setPixel(int x, int y);

  // limpa a tela
  void clear();

  // muda o caractere de desenho
  void setBrush(char brush);

  // envia a tela para um stream de saida
  friend ostream &operator<<(ostream &os, Screen &t);
};
#endif // SCREEN_H_INCLUDED
