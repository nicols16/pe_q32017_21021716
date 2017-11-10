#include <sdtio.h>
#include <math.h>

/. Acha "pi" pela aproximação de Ramanujan./

int main () {
        double pi ;
        int n ;
        int fator1, fator2 ;
        int numerador, denominador, soma ;
        printf("Entre com um numero inteiro:") ;
        scanf("%d", &n) ;
        fator1 = fatorial_1(n) ;
        fator2 = fatorial_2(n) ;
        numerador = num_pi(fator2, n);
        denominador = den_pi(fator1, n) ;
        soma = somatorio_pi(numerador, denominador) ;
}

/. Calcula o fatorial do termo inserido./

int fatorial_1(int n)
{
        int resultado =n;
        for(int i=(n-1);(i!=0);i--) {
        resultado = resultado*i ;
        }
        return resultado ;
}

/. Calcula o fatorial do termo inserido vezes 4./

int fatorial_2(int n)
{
        int resultado =n*4;
        for(int i=(n-1);(i!=0);i--) {
        resultado = resultado*i ;
        }
        return resultado ;
}

/. Calcula o numerador da aproximação./

int num_pi(int fator2, int n)
{
        int resultado ;
        resultado = fator2*(1103 +(26390*n)) ;
        return resultado ;

}

/. Calcula o denominador da aproximação./

int den_pi(int fator1, n)
{
        int resultado ;
        resultado = pow(fator1,4)*pow(396,(4*n)) ;
        return resultado ;
}

/. Calcula o somatório da aproximação./

int somatorio(int fator1, int fator2, n)
{
        int resultado ;
        int num,den ;
        double frac;
        for(int i=n;i!=0;n--) {
        num = num_pi(fator2, n) ;
        den = den_pi(fator1, n) ;
        frac = num/den ;
        resultado = resultado + frac ;
        
                
           




