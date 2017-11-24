#include <stdio.h>
#include <stdlib.h>

#define N 100000

/*Impressão*/

void imprime (int *v)
{

        for (int i=0;i<N;i++) {
        printf("%d\n", v[i]);
        }
}

/*Insertion Sort*/

void insertion_sort (int *v)
{

        int aux;

        for (int i=1;i<N;i++) {
         for (int j=i;j>0;j--) {
          while (v[j-1]>v[j]) {
          aux = v[j-1];
          v[j-1] = v[j];
          v[j]=aux;
        }
         }
          }
        imprime(v);

}

/*Função que alimenta o vetor aletoriamente*/

int* cont_vetor (int*v)
{

        for (int i=0;i<N;i++) {
        v[i] = rand()%N;
        }
        return v;
}

/*Função principal*/

int main ()
{

        int *v = malloc(N*sizeof(int));
        insertion_sort(cont_vetor(v));
        return 0;
}
        

        
          
