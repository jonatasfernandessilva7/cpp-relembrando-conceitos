#ifndef VEICULO_H_INCLUDED
#define VEICULO_H_INCLUDED

class Veiculo{

public:
    int vel;
    int blind;
    int rodas;
    int getTipo();
    int getVelMax();
    bool getArma();
    void setTipo(int tipo);
    void setVelMax(int velMax);
    void setArma(bool arma);

private:
    int tipo;
    int velMax;
    bool arma;
};


int Veiculo::getTipo(){
    return this->tipo;
}

int Veiculo::getVelMax(){
    return this->velMax;
}

bool Veiculo::getArma(){
    return this->arma;
}

void Veiculo::setTipo(int tipo){
    this->tipo = tipo;
}

void Veiculo::setVelMax(int velMax){
    this->velMax = velMax;
}

void Veiculo::setArma(bool arma){
    this->arma = arma;
}


class Moto:public Veiculo{ //herança

public:
    Moto();

};

Moto::Moto(){

    this->vel = 0;
    this->blind = 0;
    this->rodas = 2;

    setTipo(1);
    setVelMax(250);
    setArma(true);
}


#endif // VEICULO_H_INCLUDED
