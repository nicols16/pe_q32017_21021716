#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Struct para os valores do cronômetro*/

typedef struct Cron {

        int min;
        int seg;
        int dec;

} Cron;

/*Função que calcula a diferença
*entre dois registros do cronômetro*/

int dif (Cron e1,  Cron e2) {

       int aux1, aux2, aux3;

        aux1 = (e1.min*60+e1.seg)*100+e1.dec/10;
        aux2 = (e2.min*60+e2.seg)*100+e2.dec/10;
        aux3 = aux2-aux1;

        printf("%dm %ds %d\n", (aux3/100)/60, (aux3/100)%60, aux3%100);

}

/*Função principal*/

int main () {

        Cron e1, e2;
        scanf("%dm, %ds, %d", &(e1.min), &(e1.seg),  &(e1.dec));
        scanf("%dm, %ds, %d", &(e2.min), &(e2.seg),  &(e2.dec));
        dif(e1, e2);
        return 0;

}

     
        






