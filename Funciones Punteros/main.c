#include <stdio.h>
#include <stdlib.h>
void CambioPocic(int num1, int num2);
void CambioPocicPunteros(int *num1, int *num2);
int main()
{
    int edadUno;
    int edadDos;
    edadUno=22;
    edadDos=99;
    CambioPocicPunteros(&edadUno,&edadDos);
    printf("\n Edad 1: %d",edadUno);
    printf("\n Edad 2: %d",edadDos);

    return 0;
}
void CambioPocic(int num1, int num2)
{
    int aux;
    aux=num1;
    num1=num2;
    num2=aux;
}
void CambioPocicPunteros(int *num1, int *num2)
{
    int aux;
    aux=*num1;
    *num1=*num2;
    *num2=aux;
}

