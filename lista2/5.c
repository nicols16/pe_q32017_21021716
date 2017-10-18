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

int coef(int fatorialn, int fatorialk, int fatorialnk)
{
        return (fatorialn)/((fatorialk)*(fatorialnk)) ;
}

/*Função principal*/

int main()
{

        int n, k, cb ;
        int fatorialn, fatorialk, fatorialnk ;
       
        scanf("%d %d", &n, &k) ;
        fatorialnk = fat(n-k) ; 
        fatorialn = fat(n) ;
        fatorialk = fat(k) ;
        cb = coef(fatorialn, fatorialk, fatorialnk) ;
        printf("%d\n", cb) ;
        return 0 ;
}
        
        





