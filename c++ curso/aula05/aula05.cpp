#include <iostream>

using namespace std;

//vetores


int main(){

    int vetor[10];

    for (int i = 0; i < 10 ; i++){
        cout<<"digite um valor para estar no array: ";
        cin>>vetor[i];
    }

    for (int i = 0; i < 10; i++){
        cout<<vetor[i];
        cout<<"\n";
    }


    system("pause");
    return 0;
}
