#include <stdio.h>
#include <stdlib.h>

int main()
{
    //punteros
    int *punteroNumero;
    int numero;
    int num2;
    num2=&numero;
    numero=66;
    punteroNumero=&numero;
    printf("\n a- %d",num2);
    //printf("\n %d",numero);
    num2=*punteroNumero;
    printf("\n b- d%",num2);
    printf("\n %p",&numero);
    //punteroNumero=55;
    printf("\n %p",*punteroNumero);
    printf("\n %p",&punteroNumero);
    printf("\n %d",*punteroNumero);
    return 0;
}
