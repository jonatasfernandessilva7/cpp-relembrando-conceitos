#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED

class Aviao{

public:
    int velocidade = 0;
    Aviao(int tipo); //construtor
    int getVelocidadeMaxima();
    void setVelocidadeMaxima(int vMax);

private:
    bool ligado;
    std::string nome;
    int velocidadeMaxima = 0;

};

Aviao::Aviao(int tipo){
    (tipo == 1) ? this->velocidade = 800 : this->velocidade = 100;
}

int Aviao::getVelocidadeMaxima(){
    return velocidadeMaxima;
}

void Aviao::setVelocidadeMaxima(int vMax){
    this->velocidadeMaxima = vMax;
}

#endif // AVIAO_H_INCLUDED
