#include <stdlib.h>
#include <stdio.h>

#define N 100000

/*Impressão*/

void imprime (int *v)
{

        for (int i=0;i<N;i++) {
        printf("%d ", v[i]);
        }
}

/*SWAP*/

void swap (int* v, int i, int j)
{

        int aux;

         aux = v[j-1];
         v[j-1] = v[j];
         v[j]=aux;
         
}

/*Função partition*/

int partition (int * v, int low, int high)
{

        int pivot = v[high];
        int j, i = low;

        for (j=low; j<high; j++) {
        if (v[j] <= pivot) {
            swap(v, i, j);
            i++;
        }
    }
    swap(v, i, high);
    return i;
}

/*Quickort*/

void quicksort (int * v, int low, int high)
{
        int p;

        if (low < high) {
         p = partition(v, low, high);
         quicksort(v, low, p-1);
         quicksort(v, p+1, high);
        }
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
        quicksort(cont_vetor(v), 0, N);
        imprime(v);
        return 0;
}
        

        
          
