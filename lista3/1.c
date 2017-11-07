#include <stdio.h>
#include <stdlib.h>


int vogal (char c)
{
    if ((c == 'A')||(c == 'E')||(c == 'I')||(c == 'O')||(c == 'U')||(c == 'a')||(c == 'e')||(c == 'i')||(c == 'o')||(c == 'u')) {
        return 1;
    }
    return 0;
}


int n_vogais(char * entrada)
{
    int i, n=0;
    for (i=0; i<255; i++) {
        if (*(entrada+i) == '\0') break;
        if (vogal(*(entrada+i))) {
            n++;
        }
    }
    return n;
}

int main()
{
    char entrada [255];
    fgets (entrada, 255, stdin);

    printf("%d\n", n_vogais(entrada));

    return 0;
}
