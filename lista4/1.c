#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Struct para o ponto tridimensional*/

typedef struct Ponto {

        float x;
        float y;
        float z;

} Ponto;

/*Função que calcula a distância entre dois pontos*/

void dist (Ponto p1, Ponto p2)
{

        float dAB = sqrt(pow((p2.x-p1.x),2)+pow((p2.y-p1.y),2)+pow((p2.z-p1.z),2));
        printf("%f\n", dAB);
}

/*Função princiapl*/

int main ()
{

        Ponto p1, p2;
        scanf("%f, %f, %f", &(p1.x), &(p1.y), &(p1.z));
        scanf("%f, %f, %f", &(p2.x), &(p2.y), &(p2.z));
        dist(p1,  p2);
        return 0;

}



