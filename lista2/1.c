#include <stdio.h>

/*Confere se o número é par ou ímpar*/

int main(){
        int x ;

        printf("Digite um numero:\n") ;
        scanf("%d", &x) ;
        if(x%2!=0) printf("%d\n", 1) ;
        if(x%2==0) printf("%d\n", 0) ;
}
