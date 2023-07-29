#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

/*alocação dinâmica de memória*/

int main(){
    //exemplo sem alocação
    //char vnome[50];

    //cout<<"digite um nome para vnome: ";
    //gets(vnome);
    //cout<<vnome<<"\n";
    /*nesse exemplo temos espaços na memoria sendo desperdiçados*/

    //exemplo com alocação - > malloc
    char *vnome1;

    vnome1 = (char *) malloc(sizeof(char) * 4); // - > (char *) converte o retorno void da função malloc para um retorno char
    gets(vnome1);
    cout << *vnome1 << "\n\n";

    system("pause");
    return 0;
}
