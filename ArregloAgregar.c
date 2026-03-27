#include <stdio.h>

// 1. DEFINICIÓN DE LA FUNCIÓN
// Es 'int' porque al final le dice al main: "Oye, ahora el total es n + 1"
int agregarDato(int datos[], int n) {
    int nuevo;

    // PASO A: Pedimos el nuevo número que se quiere unir al grupo
    printf("\n--- AGREGAR NUEVO ELEMENTO ---");
    printf("\n¿Cual es el valor que quieres meter?: ");
    scanf("%d", &nuevo);

    // PASO B: El momento de la magia
    // Si n era 5, los datos ocupaban 0, 1, 2, 3, 4.
    // El espacio vacío que sigue es el datos[5]. ¡Exactamente el valor de n!
    datos[n] = nuevo;

    // PASO C: Como el grupo creció, le avisamos al main el nuevo tamaño
    printf("¡Listo! El numero %d se guardo al final (posicion %d).\n", nuevo, n);

    return n + 1;
}

// 2. EL MAIN (Para ver cómo crece el arreglo)
int main() {
    int miFila[100] = {10, 20, 30}; // Empezamos con 3 números
    int total = 3;

    printf("Antes de agregar, tenemos %d elementos.\n", total);

    // LLAMADA CLAVE: n se actualiza con lo que regresa la función
    total = agregarDato(miFila, total);

    printf("Ahora el total de elementos es: %d\n", total);

    // Si imprimes, verás: 10, 20, 30 y el nuevo que metiste.
    return 0;
}
