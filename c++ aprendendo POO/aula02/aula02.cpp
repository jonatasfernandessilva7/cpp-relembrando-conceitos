#include <iostream>
#include "Veiculo.h"

using namespace std;

int main(){

    Moto *moto = new Moto();

    cout<<moto->rodas<<endl;
    cout<<moto->getVelMax()<<endl;

    system("pause");
    return 0;
}
