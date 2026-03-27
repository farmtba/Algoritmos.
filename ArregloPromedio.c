#include<stdio.h>

int calcular(int datos[],int n)
{
    int k, suma = 0, promedio;

    for (k=0; k<n; k++){
        suma = suma + datos[k];
    }
    promedio = suma / n;
    return promedio;
}

int main()
{
    int miArreglo[]={10,20,20,50};
    int total = 5;
    int resultado;

    resultado = calcular(miArreglo,total);
    printf("El promedio es %d", resultado);

    return 0;
}
