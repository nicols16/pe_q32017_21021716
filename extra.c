#include <stdio.h>
#include <stdlib.h>

typedef struct Ficha {

        char *nome;
        char *end;
        int tel;

} Ficha;

int main ()
{

        Ficha bob;

        bob.nome = malloc(12*sizeof(char));
        bob.end = malloc(100*sizeof(char));
        bob.nome = "Hornby";
        bob.end = "Rua Souzeira Pinto";
        bob.tel = 961258897;

        printf("\n%s \n%s \n%d\n", bob.nome, bob.end, bob.tel);


        Ficha nic;
   
        nic.nome = malloc(12*sizeof(char));
        nic.end = malloc(100*sizeof(char));
        nic.nome = "Nícolas";
        nic.end = "Rua Vieira dE Carvalho";
        nic.tel = 964272669;

        printf("\n%s \n%s \n%d\n", nic.nome, nic.end, nic.tel);
}


        

