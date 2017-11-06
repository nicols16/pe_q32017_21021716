#include <stdio.h>
#include <math.h>

/*Função que recebe o vetor e conta as vogais*/

int vogais(char *pv,  int n)
{

        int cont = 0;

        for (int i = 0; i<n; i++) {

         if (pv[i] == 'a'||'e'||'i'||'o'||'u') {

         cont +=1;
         }

        }

        printf("%d\n", cont);
}

/*Função principal*/

int main()
{

        char v[255];
        char *pv = v;
        int n = 255;

        printf("Escreva uma palavra:\n ");
        fgets(v, 255, stdin);
        vogais(pv,n); 
        return 0;
}
