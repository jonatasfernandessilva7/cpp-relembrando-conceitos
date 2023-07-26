#include <iostream>

using namespace std;

/*struct e typedef*/

int main(){

    /*
    struct já declarada

    struct {
        string nome;
        int registro_academico;
        int codigo_curso;
    } aluno; //->nome da variavel pertencente a estrutura

    aluno.nome = "joao";

    cout<<"digite o codigo do curso de " << aluno.nome << ": ";
    cin>>aluno.codigo_curso;
    cout<<"\n\n";

    cout<<aluno.nome<<"\n\n";
    cout<<aluno.codigo_curso <<"\n\n";
    */

    //struct com tipo

    struct Aluno {
        string nome;
        int registro_academico;
        int codigo_curso;
    };

    struct Aluno aluno1;
    struct Aluno aluno2;

    aluno1.nome = "teo";
    aluno2.nome = "hernandez";

    cout<<aluno1.nome<< "\n\n";
    cout<<aluno2.nome<< "\n\n";

    system("pause");
    return 0;
}
