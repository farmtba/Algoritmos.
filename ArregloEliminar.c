#include <stdio.h>

// 1. DEFINICIÓN DE LA FUNCIÓN
// Recibe el arreglo y cuántos hay. Regresa el nuevo total (n - 1).
int eliminarDato(int datos[], int n) {
    int k, pos;

    // PASO A: Preguntar qué lugar queremos vaciar
    printf("\n--- ELIMINAR ELEMENTO ---");
    printf("\n¿Que posicion (indice) quieres borrar? (0 a %d): ", n - 1);
    scanf("%d", &pos);

    // PASO B: El truco del "recorrido" o "shift"
    // Empezamos desde la posición que queremos borrar (pos).
    // Terminamos en n-1 porque vamos a asomarnos al vecino de la derecha (k+1).
    for (k = pos; k < n - 1; k++) {
        // EL SECRETO: El valor de la derecha se copia en la posición actual.
        // El de la casilla 3 se pasa a la 2, el de la 4 a la 3...
        datos[k] = datos[k + 1];
    }

    // PASO C: Como ahora hay un carritos menos, le avisamos al main.
    printf("¡Listo! El elemento en la posicion %d ha sido eliminado.\n", pos);

    return n - 1;
}

// 2. EL MAIN (Para ver cómo se encoge el arreglo)
int main() {
    int miFila[10] = {10, 20, 30, 40, 50}; // Tenemos 5 números
    int total = 5;

    // Queremos borrar el '20' que está en la posición [1]
    total = eliminarDato(miFila, total);

    // Si imprimimos ahora, verás: 10, 30, 40, 50. ¡El 20 desapareció!
    return 0;
}
