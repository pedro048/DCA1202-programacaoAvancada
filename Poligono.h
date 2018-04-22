#ifndef POLIGONO_H_INCLUDED
#define POLIGONO_H_INCLUDED
#include "Ponto.h"
/**
 * @brief A classe Poligono representa um poligono com ate 100 vertices, sendo ele pertencente ao plano cartesiano
 */
class Poligono{
public:
    /**
     * @brief Poligono e o construtor padrao da classe
     *
     * Nele e feita a alocacao dinamica do vetor de 100 objetos da classe Ponto, que sao usados para os vertices do poligono
     */
    Poligono();
    /**
     * @brief ~Poligono destrutor padrao da classe
     *
     * No destrutor e realizada a liberacao da memoria alocada para os 100 objetos da classe Ponto
     */
    ~Poligono();
    /**
     * @brief Vertices guarda valores das coordenadas do ponto p1 no vetor de Ponto cujo indice e o numero de vertices atual do poligono
     * @param px valor x da coordenada
     * @param py valor y da coordenada
     */
    void Vertices(float px, float py);
     /**
     * @brief numVertices recupera o valor da quantidade de vertices
     * @return numero atual de vertices do poligono
     */
    int numVertices();
     /**
     * @brief O metodo area calcula a area do poligono desde que seus vertices estejam ordenados no vetor de Ponto em sentido anti-horario
     * @return area do poligono
     */
    float area();
    /**
     * @brief translada desloca cada vertice para a posicao (x+a1 y+a2)
     * @param a1 valor a ser somado ao x
     * @param a2 valor a ser somado ao y
     */
    void translada(float a1, float a2);
     /**
     * @brief rotaciona calcula as coordendas dos pontos depois da rotacao em um dado angulo e em relacao ao eixo indicado
     * @param eixo corresponde ao centro de rotacao
     * @param angle angulo em graus
     */
    void rotaciona(Ponto eixo, float angle);
    /**
     * @brief imprime mostra os pontos que representam o poligono por meio seus vertices
     */
    void imprime();
    /**
     * @brief centroMassa calcula o ponto que e o centro de massa do poligono
     * @return ponto que representa o centro de massa do poligono
     */
    Ponto centroMassa();
protected:
    /**
     * @brief numVert numero de vertices do poligono
     */
    int numVert=0;
     /**
     * @brief p ponteiro para um objeto da classe Ponto
     */
    Ponto *p;
};

#endif // POLIGONO_H_INCLUDED
