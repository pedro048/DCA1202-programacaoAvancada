#ifndef PONTO_H_INCLUDED
#define PONTO_H_INCLUDED

/**
 * @brief A classe Ponto representa um ponto no plano cartesiano bidimensional
 */
class Ponto{
private:
 /**
 * @brief x e y sao, respectivamente, o primeiro e segundo elemento do par ordenado
 */
    float x, y;
public:
    /**
     * @brief Ponto eh o construtor padrao da classe
     */
    Ponto();
    /**
     * @brief ~Ponto eh o destrutor padrao da classe
     */
    ~Ponto();
    /**
     * @brief Construtor Ponto com inicializacao do par ordenado (x, y)
     * @param a1 valor de x
     * @param a2 valor de y
     */
    Ponto(float a1, float a2);
    /**
     * @brief setX faz com que o valor da coordenada x receba o valor passado no argumento
     * @param px novo valor de x
     */
    void setX(float px);
    /**
     * @brief getX recupera o valor de x
     * @return valor atual da coordenada x
     */
    float getX();
    /**
     * @brief setY faz com que o valor da coordenada y receba o valor passado no argumento
     * @param py novo valor de y
     */
    void setY(float py);
    /**
     * @brief getY recupera valor de y
     * @return valor atual da coordenada y
     */
    float getY();
    /**
     * @brief setXY eh responsavel por sobrescreve simultaneamente valores de x e y do par ordenado
     * @param px novo valor de x
     * @param py novo valor de y
     */
    void setXY(float px, float py);
    /**
     * @brief add soma as coordenadas (x,y) do ponto com as coordenadas (x1,y1) de outro objeto da classe Ponto passado como argumento do metodo
     * @param p1 objeto da classe Ponto
     */
    void add(Ponto p1);
    /**
     * @brief sub sutrai as coordendas (x,y) do ponto com as coordenadas (x1,y1) de outro objeto da classe Ponto passado como argumento do metodo
     * @param p1 objeto da classe Ponto
     */
    void sub(Ponto p1);
    /**
     * @brief O metodo norma calcula a norma euclidiana do ponto, ou seja, a distancia dele a origem do sistema de coordenadas cartesianas
     * @return norma do ponto
     */
    float norma();
    /**
     * @brief translada desloca um ponto (x,y) para o ponto com coordenadas (x+a1, y+a2)
     * @param a1 valor a ser somado ao x
     * @param a2 valor a ser somado ao y
     */
    void translada(float a1, float a2);
    /**
     * @brief imprime mostra o ponto representado na forma de par ordenado (X,Y)
     */
    void imprime();

};

#endif // PONTO_H_INCLUDED
