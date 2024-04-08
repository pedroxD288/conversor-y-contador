#include <stdio.h>
#include <stdlib.h>

int main() {
    float celsius, fahrenheit;
    int opcion;

    printf("Seleccione una opcion:\n");
    printf("1. Convertir de Celsius a Fahrenheit\n");
    printf("2. Salir\n");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            printf("Introduce la temperatura en grados Celsius: ");
            scanf("%f", &celsius);
            fahrenheit = (celsius * 9/5) + 32;
            printf("%.2f grados Celsius son %.2f grados Fahrenheit\n", celsius, fahrenheit);
            break;
        case 2:
            printf("Saliendo del programa...\n");
            break;
        default:
            printf("Opción no válida\n");
            break;
    }

    return 0;
}
