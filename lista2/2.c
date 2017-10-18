#include <stdio.h>

/*Função que calcula o volume em ponto flutuante*/

float volume(float h, float l, float c)
{
       
        return l*h*c ;
}

/*Função principal*/

int main()
{
        float l, h, c ;
        float resultado ;
        scanf("%f %f %f", &h, &l, &c) ;
        resultado = volume(h, l, c) ;
        printf("%.2f\n", resultado) ;
}
