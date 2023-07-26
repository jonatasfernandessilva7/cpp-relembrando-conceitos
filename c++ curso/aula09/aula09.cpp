#include <iostream>
#include <stdlib.h>

using namespace std;

/*ponteiros comum e em funções(com parametros normais e com vetores)*/

int testPonteiro( int *numero1, int numero2);
int teste2Ponteiro ( int *vetor);

int main(){

    int variavel = 3;
    int *ponteiro;

    ponteiro = &variavel;

    cout<< ponteiro << "\n\n";
    cout<< *ponteiro << "\n\n";
    cout<< &variavel << "\n\n";

    //ponteiro em função com parametro comum

    cout<<testPonteiro(&variavel, 10) << "\n\n";

    //ponteiro em função com parametro vetor

    int vetor[1];

    teste2Ponteiro(vetor);

    for (int i = 0 ; i < 1 ; i++){
        cout<<vetor[i]<<"\n\n";
    }

    system("pause");
    return 0;
}


int testPonteiro( int *numero1, int numero2){
    return *numero1 += numero2;
}

int teste2Ponteiro(int *vetor){
    return vetor[0] = 10;
}
