#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

//questão 12//

/*
int main(){

	float nota_1,nota_2,nota_3,media_exercicios,media_aproveitamento;
	string conceito;

	cout<<"qual foi a primeira nota desse aluno?\n";
	cin>>nota_1;
	cout<<"qual a segunda nota?\n";
	cin>>nota_2;
	cout<<"agora me fale qual foi a ultima nota:\n";
	cin>>nota_3;

    media_exercicios = (nota_1  +nota_2 + nota_3)/3;
    media_aproveitamento = (nota_1 + (nota_2 * 2) + (nota_3*3) + media_exercicios)/7;

    if(media_aproveitamento >= 90){
        conceito = "a";
        cout<<"aprovado!!!!\n";
    }else if(media_aproveitamento >=25 && media_aproveitamento < 90){
        conceito = "b";
        cout<<"aprovado!!!!\n";
    }else if(media_aproveitamento >= 60 && media_aproveitamento < 75){
        conceito = "c";
        cout<<"aprovado!!!!\n";
    }else if(media_aproveitamento >= 40 && media_aproveitamento < 60){
        conceito = "d";
        cout<<"reprovado!!!!\n";
    }else if ( media_aproveitamento < 40){
        conceito = "e";
        cout<<"reprovado!!!!\n";
    }

    return 0;
}
*/


//questão 11//

/*
int main(){
	float preco = 100, preco_com_desconto;
	int etiqueta;

	cout<<"ETIQUETAS A ESCOLHA-->1,2,3,4\n";
	cout<<"me diga qual etiqueta escolheu:\n";
	cin>>etiqueta;

	if(etiqueta == 1){
		preco_com_desconto = preco - (0.1*preco);
		cout<<"a vista em dinheiro ou cheque por " << preco_com_desconto;
	}else if(etiqueta == 2){
	    preco_com_desconto = preco - (0.15*preco);
		cout<<"a vista no crtao de credito por " << preco_com_desconto;
	}else if(etiqueta == 3){
	    preco_com_desconto = preco;
		cout<<"em duas vezes por " << preco_com_desconto;
    } else{
    	preco_com_desconto = preco+(0.1*preco);
    	cout<<"em duas vezez " << preco_com_desconto;
	}

	return 0;
}
*/


//questão 10//
/*
#include <math.h>

int main(){

	float altura,imc,peso;

	cout<<"agora de fale o seu peso em kilos:\n";
	cin>> peso;
	cout<<"me diga a sua altura em metros:\n";
	cin>>altura;
    imc = peso/(pow(altura, 2));

    if(imc<18.5){
        cout<<"abaixo do peso\n";
    }else if(imc >= 18.5 && imc <= 25){
        cout<<"peso normal\n";
    }else if(imc > 25 && imc <= 30){
        cout<<"acima do peso\n";
    }else{
        cout<<"obeso\n";
    }

    return 0;
}
*/


//questão 9//

/*
int main(){

	float altura;
	char sexo;
	float imc;

	cout<<"agora de fale o seu sexo (M/F):\n";
	cin>>sexo;
	cout<<"me diga a sua altura:\n";
	cin>>altura;

	if((sexo == 'M')||(sexo == 'm')){
		imc = (72.7 * altura) - 58;
		cout<<"o seu imc eh: "<< imc;
	} else{
		imc = (62.1 * altura) - 44.7;
		cout<<"o seu imc eh: " << imc;
	}

	return 0;
}
*/
