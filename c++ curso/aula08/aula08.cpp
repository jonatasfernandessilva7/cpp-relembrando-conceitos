#include <iostream>
#include <stdlib.h>

using namespace std;

/*funções*/

int soma(int a, int b);
double calculaPotencia(double numero1, int numero2);
long fatorial(int numero);

int main(){

    double numero1;
    int numero2;
    double res;

    cout<<"insira um valor para o numero 1: ";
    cin>>numero1;
    cout<<"insira um segundo valor para o numero 2: ";
    cin>>numero2;

    res = calculaPotencia(numero1, numero2);

    cout<<"seu resultado eh: \n\n";
    cout<<res;
    cout<<"\n\n";

    cout<<"e o fatorial do segundo numero eh: \n\n";
    cout<<fatorial(numero2);
    cout<<"\n\n";

    //cout<<soma(1,2)<<"\n";


    system("pause");
    return 0;
}

long fatorial(int numero){

    if (numero <= 0){
        return 1;
    }else{
        return numero * fatorial(numero - 1);
    }
}

double calculaPotencia(double numero1, int numero2){

    double potencia;

    for (int i = 0; i < numero2; i++){
        potencia = (numero1 * numero1);
    }

    return potencia;
}



int soma (int a, int b) {

    int c;
    c = a + b;
    return c;
}
