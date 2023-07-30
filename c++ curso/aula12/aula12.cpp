#include <iostream>
#include <vector>

using namespace std;

/*vector*/

int main(){

    //declarar
    vector<int> numeros;
    vector<int> numerosSecretos;

    for(int i = 1; i < 5; i++){
        numeros.push_back(i); // inserindo elementos
    }

    for(int i = 1; i < 5; i++){
        numerosSecretos.push_back(i); // inserindo elementos no final
    }

    //sem usar iterator
    numeros.insert(numeros.begin()+1, 78); //inserir no começo
    numeros.insert(numeros.end()-1, 78); //inserir no final

    numeros.swap(numerosSecretos); //trocando valores de vector

    numeros.erase(numeros.end());
    //numerosSecretos.clear();

    cout << numeros.front() << endl; //primeiro valor
    cout<< numerosSecretos.back()<<endl;//ultimo valor
    cout<<numeros.at(tamanho/2)<<"\n\n"; //elemento do meio

    while(!numerosSecretos.empty()){
        numerosSecretos.pop_back();
    }

    int tamanho = numeros.size();
    int tamanhoSec = numerosSecretos.size();

    for(int i = 0; i < tamanho; i++){
        cout<<numeros[i]<<"\n";
    }

    for(int i = 0; i < tamanhoSec; i++){
        cout<<numerosSecretos[i]<<"\n";
    }


    system("pause");
    return 0;
}
