#ifndef RETANGULO_H_INCLUDED
#define RETANGULO_H_INCLUDED
#include "Poligono.h"

/**
 * @brief A classe Retangulo representa poligonos com 4 vertices e angulos internos iguais a 90 graus
 */
class Retangulo: public Poligono{
private:
    /**
     * @brief l largura do retangulo
     */
    /**
     * @brief h altura do retangulo
     */
    float l, h;
public:
    /**
     * @brief Retangulo construtor padrao da classe
     *
     * O construtor padrao faz a alocacao dinamica de um vetor do tipo Ponto com 4 posicoes
     */
    Retangulo();
     /**
     * @brief ~Retagulo destrutor padrao da classe
     *
     * O destrutor padrao libera da memoria o vetor do tipo Ponto que havia sido alocado
     */
    ~Retangulo();
      /**
     * @brief Retangulo declara os pontos do retangulo baseado no vertice superior esquerdo e as dimensoes nos eixos coordenados
     * @param x coordenada x do vertice superior esquerdo
     * @param y coordenada y do vertice superior esquerdo
     * @param largura dimensao horizontal do retangulo descrito
     * @param altura dimensao vertical do retangulo descrito
     */
    Retangulo(float x, float y, float largura, float altura);
};

#endif // RETANGULO_H_INCLUDED
