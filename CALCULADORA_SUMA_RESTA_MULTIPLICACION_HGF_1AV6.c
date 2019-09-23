/*
PRACTICA 1_SUMA,RESTA y MULTIPLICACION
HERNANDEZ GAONA VICTOR NATHANAEL
1AV6
*/
#include<stdlib.h>
#include<conio.h>

int main (void)
{
printf("1.-Suma\n");
printf("2.-Resta\n");
printf("3.-Multiplicacion\n");
printf("Introduce la opcion\n");

int opt;
scanf("%d",&opt);

int a;
int b;
int c;
printf("Introduce la primera cantidad: ");
scanf("%d",&a);
printf("Introduce la segunda cantidad: ");
scanf("%d",&b);

if(opt==1)
{
c=a+b;
}
else if(opt==2)
{
c=a-b;
}
else if(opt==3)
{
c=a*b;
}
printf("El resultado es %d",c);
}

