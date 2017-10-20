#include <stdio.h>
#include <math.h>

/*Função que seleciona o tipo de converção
* e, em seguida, chama a função associada*/

void tipos(int sel1, int sel2, int sel3, float valor)
{

        switch(sel1){

         case 1:
         temp(sel2, sel3, valor) ;

         case 2:
         bnum(sel2, sel3, valor) ;

         default:

         printf("Inválido") ;
     
        }
}

/*Função que seleciona a unidade de entrada, a unidade
* de saída, o valor a ser convertido e
* realiza a conversão*/

void temp(int sel2, int sel3, float valor)
{

        float t ;

        if(sel2==1&&sel3==2){

         t = valor*1.8+32 ;
   
        } 

        else if(sel2==1&&sel3==3){

         t = valor + 273.15 ;

        }

        else if(sel2==2&&sel3==1){

         t = (valor-32)/1.8 ;

        }

        else if(sel2==2&&sel3==3){

         t = 5*((valor-32)/9)+273.15 ;

        }

        else if(sel2==3&&sel3==1){

         t = valor-273.15 ;

        }

        else{

         t = 9*((valor-273.15)/5)+32 ;

       }
       
        printf("%.2f", t) ;
}

/*Função principal*/

int main()
{

        int sel1, sel2, sel3 ;
        float valor ;

        tipos(sel1, sel2, sel3, valor) ;
        return 0 ;

}

      
          
         



        


