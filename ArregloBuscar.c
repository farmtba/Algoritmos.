#include <stdio.h>

// 1. DEFINICIÓN DE LA FUNCIÓN
// Usamos 'void' porque solo queremos que imprima un mensaje si lo halló.
void buscarDato(int datos[], int n) {
    int k;
    int objetivo;    // El número que queremos encontrar
    int encontrado = 0; // Esta es nuestra "Bandera" (0 = No, 1 = Sí)

    // PASO A: Pedimos el número que vamos a buscar
    printf("\n--- BUSCAR UN NUMERO ---");
    printf("\n¿Que valor estas buscando?: ");
    scanf("%d", &objetivo);

    // PASO B: Caminamos por todo el arreglo buscando al "sospechoso"
    for (k = 0; k < n; k++) {
        // Si el valor que hay en el cajón 'k' es IGUAL al que buscamos...
        if (datos[k] == objetivo) {
            printf("¡Lo encontre! El numero %d esta en la posicion [%d].\n", objetivo, k);
            encontrado = 1; // Cambiamos la bandera a "SÍ"
            break; // Opcional: dejamos de buscar porque ya lo hallamos
        }
    }

    // PASO C: Si terminamos el ciclo y la bandera sigue en 0, es que no estaba
    if (encontrado == 0) {
        printf("Lo siento, el numero %d no existe en este arreglo.\n", objetivo);
    }
}

// 2. EL MAIN (Para activar al detective)
int main() {
    int miLista[] = {5, 12, 8, 44, 19};
    int total = 5;

    buscarDato(miLista, total);

    return 0;
}
