#include <stdio.h>

/*Função que calcula o volume em ponto flutuante*/

float volume(float h, float l, float c){
        float vol ;
        vol = l*h*c ;
        return vol ;
}

/*Função principal*/

float main(){
        float l, h, c ;
        float resultado ;

        printf("Determine os valores da altura, largura e comprimento: \n") ;
        scanf("%f %f %f", &h, &l, &c) ;
        resultado = volume(h, l, c) ;
        printf("O vlume é:%.2f\n", resultado) ;
}
