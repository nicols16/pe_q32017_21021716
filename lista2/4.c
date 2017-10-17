#include <stdio.h>
#include <math.h>

/*Operação soma*/

float soma(float x, float y)
{
        return (x+y) ;
}

/*Operação subtração*/

float sub(float x, float y)
{
        return (x-y) ;
}


/*Operação multiplicação*/

float multi(float x, float y)
{
        return (x*y) ;
}


/*Operação divisão*/

float div(float x, float y)
{
        return (x/y) ;
}


/*Operação potenciação*/

float pot(float x, float y)
{
        return (pow(x, y)) ;
}




/*Seleção de opção*/

float opcao(int a, float x, float y)
{
        switch (a) {

         case 1:
         return soma(x, y) ;

         case 2:
         return sub(x, y) ;

         case 3:
         return multi(x, y) ;

         case 4:
         return div(x, y) ;

         case 5:
         return pot(x, y) ;

         default:
         printf("Operação inválida") ;
         return -1 ;
        
        }
}


/*Função principal*/

int main()
{
        int a;
        float x,  y ;

        scanf("%d %f %f", &a, &x, &y) ;
        printf("%.2f\n", opcao(a, x, y)) ;

        return 0 ;
}



















      

       




