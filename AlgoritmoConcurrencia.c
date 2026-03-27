#include <stdio.h>

// 1. DEFINICIÓN DE LA FUNCIÓN
// Es 'int' porque nos va a regresar el TOTAL de veces que apareció el número.
int contarConcurrencia(int datos[], int n) {
    int k;
    int objetivo;    // El número que queremos contar
    int contador = 0; // ¡VITAL!: Empezar en 0 (la cuenta está limpia)

    // PASO A: Preguntar qué número queremos rastrear
    printf("\n--- CONTAR REPETICIONES ---");
    printf("\n¿Que numero quieres buscar en la lista?: ");
    scanf("%d", &objetivo);

    // PASO B: Recorrer todo el arreglo de principio a fin
    for (k = 0; k < n; k++) {
        // PREGUNTA: ¿El valor en esta casilla es IGUAL al que buscamos?
        if (datos[k] == objetivo) {
            // Si son iguales, sumamos 1 a nuestro contador
            contador = contador + 1;

            // Tip: También puedes poner 'contador++;' es lo mismo.
        }
    }

    // PASO C: Regresamos el resultado final al main
    return contador;
}

// 2. EL MAIN (Para ver el conteo final)
int main() {
    int misDatos[] = {5, 8, 5, 12, 5, 3}; // El 5 se repite 3 veces
    int total = 6;
    int cuantasVeces;

    cuantasVeces = contarConcurrencia(misDatos, total);

    printf("\nEl numero se encontro %d veces en el arreglo.\n", cuantasVeces);

    return 0;
}
