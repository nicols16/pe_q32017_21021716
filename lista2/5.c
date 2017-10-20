#include <stdio.h>
#include <math.h>

/*Função que calcula o fatorial*/

int fat(int a)
{
        
        int fator = a ;

        for(int i=(a-1);i!=0;--i){
          fator = fator*i ;
        }

        return fator ; 
         
}

/*Função que calcula o coeficiente*/

void coef(int fatorialn, int fatorialk, int fatorialnk)
{

        int cb ;

        cb = (fatorialn)/((fatorialk)*(fatorialnk)) ;
        printf("%d\n", cb) ;
}

/*Função que seleciona o fatorial a ser calculado
* e repassa os valores para o cálculo do coeficiente*/

void selecao(int n, int k)
{

        int fatorialn, fatorialk, fatorialnk ;
        
        fatorialnk = fat(n-k) ; 
        fatorialn = fat(n) ;
        fatorialk = fat(k) ;
        coef(fatorialn, fatorialk, fatorialnk) ;



/*Função principal*/

int main()
{

        int n, k, cb, sel;
        int fatorialn, fatorialk, fatorialnk ;
       
        scanf("%d %d", &n, &k) ;
        sel = selecao(n, k) ;
        return 0 ;
}
        
        





