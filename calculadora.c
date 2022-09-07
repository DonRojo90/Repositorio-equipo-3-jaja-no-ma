#include <stdio.h>
#include <math.h>


void main(void){
int n1,n2,i,j,a,b,suma,mul;

printf("BIENVENIDO A LA CALCULADORA");
  printf("Mi chavo el Hernando");
  printf("Introduce un número Para seleccionar una opción del menú:");
  printf("1.-Suma");
  printf("2.-Multiplicación");
  printf("3.-Resta");
  printf("4.-División");
  scanf("%d",n1);
  
  Switch(n1)
  {
  Case1:
    printf("Introduce el 1er número a sumar:");
    scanf("%d",a);
    printf("/nIntroduce el 2do número a sumar:");
    scanf("%d",b);
    suma=a+b;
    printf("Tu resultado es:%d",suma);
   Case2:
    printf("Introduce el 1er número a restar:");
    scanf("%d",a);
    printf("/nIntroduce el 2do número a restar:");
    scanf("%d",b);
    resta=a-b;
    printf("Tu resultado es:%d",resta);
   Case3:
    printf("Introduce el Multiplicando:");
    scanf("%d",a);
    printf("/nIntroduce el Multiplicador:");
    scanf("%d",b);
    mul=a*b;
    printf("Tu resultado es:%d",mul);
  }
  



}
