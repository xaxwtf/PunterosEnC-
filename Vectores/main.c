#include <stdio.h>
#include <stdlib.h>
void mostrar(int *puntero, int cant);
int main()
{
    int num[3];
    int *puntero;
    puntero=num;
    int aux=333;
    num[0]=9;
    num[1]=99;
    num[2]=999;
    printf("\n Numero: %d",*(puntero-2));
    printf("\n Numero: %d",*(puntero+1));
    printf("\n Numero: %d",*(puntero+2));///el * sirve para mostrar el contenido de la variable
    printf("\n Numero: %d",*(puntero+3));
    printf("\n numero : %d",num);
    mostrar(num,3);
    return 0;
}
void mostrar(int *puntero, int cant)
{
    int i;
    for(i=0;i<cant;i++)
    {
        printf("\n Numero: %d",*(puntero+i));
    }
}
