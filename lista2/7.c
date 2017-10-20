#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*Função que seleciona a unidade de entrada, a unidade
* de saída, o valor a ser convertido e
* realiza a conversão, para as temperaturas*/

void temp(int sel2, int sel3, float valor)
{

        float t ;

        if(sel2==1&&sel3==2){

         t = valor*1.8+32 ;
         printf("%.2fF\n", t) ;
   
        } 

        else if(sel2==1&&sel3==3){

         t = valor + 273.15 ;
         printf("%.2fK\n", t) ;

        }

        else if(sel2==2&&sel3==1){

         t = (valor-32)/1.8 ;
         printf("%.2fC\n", t) ;

        }

        else if(sel2==2&&sel3==3){

         t = 5*((valor-32)/9)+273.15 ;
         printf("%.2fK\n", t) ;

        }

        else if(sel2==3&&sel3==1){

         t = valor-273.15 ;
         printf("%.2fC\n", t) ;

        }

        else{

         t = 9*((valor-273.15)/5)+32 ;
         printf("%.2fF\n", t) ;

       }
       
}

/*Função que seleciona a unidade de entrada, a unidade
* de saída, o valor a ser convertido e
* realiza a conversão, para as bases numéricas*/

void bnum(int sel2, int sel3, float valor)
{

        int num ;

        if(sel2==1){

          for(int i = 31;i>=0;i--){

          num = (int) valor >> i ;

            if(num&1){

            printf("1") ;

            }

            else{

            printf("0") ;

            }

         }

        printf("\n") ;
        system("pause") ;
        
        }

         else{

         num = 0 ;

         for(int i = 0; valor > 0; i++){

         num = num + pow(2, i) * ((int) valor % 10);
         valor = valor / 10;
     
         }

         printf("%d\n",  num) ;
         
         }

}


        


/*Função que seleciona o tipo de converção
* e, em seguida, chama a função associada*/

void tipos(int sel1, int sel2, int sel3, float valor)
{

        if(sel1==1){

         temp(sel2, sel3, valor) ;

        }

         else{
         bnum(sel2, sel3, valor) ;

         }
}

/*Função principal*/

int main()
{

        int sel1, sel2, sel3 ;
        float valor ;

        scanf("%d %d %d %f", &sel1, &sel2, &sel3, &valor) ;
        tipos(sel1, sel2, sel3, valor) ;
        return 0 ;

}

      
          
         



        


