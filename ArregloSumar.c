#include<stdio.h>

int suma(int datos[],int n)
{
    int k, suma=0;

    for(k=0;k<n;k++){

        suma=suma+datos[k];
    }
    return suma;
}

int main()
{
    int arreglo []= {10,20,20,50};
    int tamanio = 4;
    int resultado;

    resultado = suma(arreglo,tamanio);

    printf("El resultado es: %d",resultado);


    return 0;
}
