#include <stdio.h>
#include <math.h>


void main(void){
int n1,n2,i,j,a,b,suma,mul,res,div;

printf("BIENVENIDO A LA CALCULADORA");
  printf("Introduce un número Para seleccionar una opción del menú:");
  printf("1.-Suma");
  printf("2.-Multiplicación");
  printf("3.-Resta");
  printf("4.-División");
  scanf("%d",$n1);
  
  Switch(n1)
  {
  Case1:
    printf("Introduce el 1er número a sumar:");
    scanf("%d",a);
    printf("/nIntroduce el 2do número a sumar:");
    scanf("%d",b);
    suma=a+b;
    printf("Tu resultado es:%d",suma);
    break;
   Case2:
    printf("Introduce el Multiplicando:");
    scanf("%d",a);
    printf("/nIntroduce el Multiplicador:");
    scanf("%d",b);
    mul=a*b;
    printf("Tu resultado es:%d",mul);
    break;
   Case3:
    printf("Introduce el Número a Restar:");
    scanf("%d",a);
    printf("/nIntroduce el Restador:");
    scanf("%d",b);
    res=a-b;
    printf("Tu resultado es:%d",res);
    break;
   Case4:
    printf("Introduce el Dividendo:");
    scanf("%d",a);
    printf("/nIntroduce el Divisor:");
    scanf("%d",b);
    div=a/b;
    break;
    printf("Tu resultado es:%d",div);
   Default:
    printf("No está en la lista, deseas hacer otra operación");
  }
  



}
