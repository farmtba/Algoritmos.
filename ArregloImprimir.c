#include<stdio.h>>

void imprimirArreglo(int datos[],int n)
{
    int k; //declarando contador para nuestro recorrido

    for(k=0;k<n;k++){
        printf("\nPosicion %d valor %d",k,datos[k]);
    }
}

int main()
{
    int arreglo[]= {15,23,32,46,51}; //Declaramos un arreglo
    int tamanio = 5;

    printf("lectura del arreglo");

    imprimirArreglo(arreglo,tamanio);

    return 0;
}
