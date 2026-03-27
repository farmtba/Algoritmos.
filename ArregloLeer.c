#include<stdio.h>

int leerDatos(int datos[])
{
    int tot,k;

    printf("Tamaño del arreglo\n");
    scanf("%d",&tot);

    //Recorriendo el arreglo
    for(k=0;k<tot;k++){
        printf("Dato %d ",k+1);
        scanf("%d",&datos[k]); //guardando los datos en la direccion &datos[k]

    }
    return tot;
}

int main ()
{
    int misDatos [100];
    int n; //Indicamos cuantos lugares se guardan

    //llamando a la función
    n = leerDatos(misDatos);

    printf("Datos guardados");

    return 0;
}
