#include <stdio.h>
#include <math.h>

/*Operação soma*/

float soma(int valor){
        float soma, n1, n2 ;
        printf("Digite dois números:\n") ;
        scanf("%f %f", &n1, &n2) ;
        soma = n1+n2;
        return soma ;
}

/*Operação subtração*/

float sub(int valor){
        float sub, n1, n2 ;
        printf("Digite dois números:\n") ;
        scanf("%f %f", &n1, &n2) ;
        sub = n1-n2;
        return sub ;
}

/*Operação multiplicação*/

float mult(int valor){
        float mult, n1, n2 ;
        printf("Digite dois números:\n") ;
        scanf("%f %f", &n1, &n2) ;
        mult = n1*n2;
        return mult ;
}

/*Operação divisão*/

float div(int valor){
        float div, n1, n2 ;
        printf("Digite dois números:\n") ;
        scanf("%f %f", &n1, &n2) ;
        div = n1/n2;
        return div ;
}

/*Operação potenciação*/

float pot(int valor){
        float pot, n1, n2 ;
        printf("Digite dois números:\n") ;
        scanf("%f %f", &n1, &n2) ;
        pot = pow(n1,n2) ;
        return pot ;
}

/*Função principal*/

float main(){
        int valor ;
        float resp ;
        printf("Selecione a operação: (1)soma,(2)sub,(3)mult,(4)div ou (5)pot:\n") ;
        scanf("%d", &valor) ;

        if(valor==1){
        resp = soma(valor) ;
        printf("A resposta é:%f\n", resp) ;
        }

        if(valor==2){
        resp = sub(valor) ;
        printf("A resposta é:%f\n", resp) ;
        }

        if(valor==3){
        resp = mult(valor) ;
        printf("A resposta é:%f\n", resp) ;
        }

        if(valor==4){
        resp = div(valor) ;
        printf("A resposta é:%f\n", resp) ;
        }

        if(valor==5){
        resp = pot(valor) ;
        printf("A resposta é:%f\n", resp) ;
        }
}



