#include <iostream>
#include "Aviao.h"

using namespace std;

int main(){

    Aviao *aviao = new Aviao(1);

    cout<<aviao->velocidade<<endl;
    aviao->setVelocidadeMaxima(150);
    cout<<aviao->getVelocidadeMaxima()<<endl;

    system("pause");
    return 0;
}
