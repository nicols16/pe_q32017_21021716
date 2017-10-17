#include <stdio.h>
#include <math.h>

/*Operação soma*/

float soma(float a, float b)
{
        return (a+b) ;
}

/*Operação subtração*/

float soma(float a, float b)
{
        return (a-b) ;
}


/*Operação multiplicação*/

float soma(float a, float b)
{
        return (a*b) ;
}


/*Operação divisão*/

float soma(float a, float b)
{
        return (a/b) ;
}


/*Operação potenciação*/

float pot(int valor){
        float pot, n1, n2 ;
        printf("Digite dois números:\n") ;
        scanf("%f %f", &n1, &n2) ;
        pot = pow(n1,n2) ;
        return pot ;
}

/*Seleção de opção*/

int opcao (int valor)
{

if (valor==1) {
        resp = soma(valor) ;
        printf("A resposta é:%f\n", resp) ;
        }

        if (valor==2) {
        resp = sub(valor) ;
        printf("A resposta é:%f\n", resp) ;
        }

        if (valor==3) {
        resp = mult(valor) ;
        printf("A resposta é:%f\n", resp) ;
        }

        if (valor==4) {
        resp = div(valor) ;
        printf("A resposta é:%f\n", resp) ;
        }

        if (valor==5) {
        resp = pot(valor) ;
        printf("%f\n", resp) ;
        }
}


/*Função principal*/

int main(){
        int valor ;
        float resp ;
        printf("Selecione a operação: (1)soma,(2)sub,(3)mult,(4)div ou (5)pot:\n") ;
        scanf("%d", &valor) ;
        resp = opcao (valor) ;

       
}



