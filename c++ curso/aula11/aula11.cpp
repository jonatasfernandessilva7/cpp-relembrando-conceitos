#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

/*aloca��o din�mica de mem�ria*/

int main(){
    //exemplo sem aloca��o
    //char vnome[50];

    //cout<<"digite um nome para vnome: ";
    //gets(vnome);
    //cout<<vnome<<"\n";
    /*nesse exemplo temos espa�os na memoria sendo desperdi�ados*/

    //exemplo com aloca��o - > malloc
    char *vnome1;

    vnome1 = (char *) malloc(sizeof(char) * 4); // - > (char *) converte o retorno void da fun��o malloc para um retorno char
    gets(vnome1);
    cout << *vnome1 << "\n\n";

    system("pause");
    return 0;
}
