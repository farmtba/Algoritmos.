#include <stdio.h>

// Esta función es muy sencilla, solo sirve para confirmar el total
int contarElementos(int n) {
    // No necesitamos recorrer el arreglo con un 'for'
    // porque la variable 'n' ya lleva la cuenta de los registros.
    return n;
}

int main() {
    int miArreglo[100]; // Capacidad para 100 (Tamaño físico)
    int n;              // Cantidad de datos guardados (Tamaño lógico)

    // Imagina que usamos la función leerDatos que ya estudiamos
    // n = leerDatos(miArreglo);

    // Si el usuario metió 5 números, n valdrá 5.
    printf("En el arreglo hay actualmente %d datos.\n", n);

    return 0;
}
