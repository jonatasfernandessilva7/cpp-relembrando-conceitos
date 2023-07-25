#include <iostream>

using namespace std;

/*para declarar variaveis globais basta inicializa-las fora da main*/

int i = 1,j = 2;

int main(){

    /*variaveis globais e locais*/

    int k,l;

    i = 15;

    k = 10;
    l = 11;

    int res = k*i;

    cout<<res<<endl;


    system("pause");
    return 0;
}
