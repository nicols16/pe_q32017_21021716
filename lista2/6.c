#include <stdio.h>
#include <math.h>

/*Função que calcula o valor de delta*/

double delta(double a, double b, double c)
{

        double delt ;

        if(a!=0) {

        delt = (pow(b, 2) - 4*a*c) ;
        return delt ;

        }

        else {

         printf("Operação finalizada\n") ;

        }

}

/*Função que calcula em Bháskara*/

void bhask(double delt, double a, double b, double c)
{

        double bha1, bha2;
        

        if(delt>=0) {

         bha1 = (-b+sqrt(delt))/(2*a) ;
         bha2 = (-b-sqrt(delt))/(2*a) ;
         printf("%.2lf %.2lf\n", bha1, bha2) ;
     
        }

        else {

         bha1 = (-b)/2*a ;
         bha2 = sqrt(-delt)/2*a ;
         printf("%.2lf+%.2lf*i %.2lf-%.2lf*i\n", bha1, bha2, bha1, bha2) ;
        
        
        }
}

/*Função principal*/

int main()
{

        double a, b, c, delt ;
  
        scanf("%lf %lf %lf", &a, &b, &c) ;
        delt = delta(a, b, c) ;
        bhask(delt, a, b, c ) ;
        return 0 ;

}
         
       
        


         
         
         


