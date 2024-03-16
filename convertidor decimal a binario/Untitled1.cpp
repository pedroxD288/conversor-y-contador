#include <stdio.h>

void decimalToBinary(int num) {
    int binary[32];
    int i = 0;

    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int decimalNum;
    printf("Introduce un numero decimal: ");
    scanf("%d", &decimalNum);

    printf("El maquiavelico numero decimal ingresado en binario es: ");
    decimalToBinary(decimalNum);

    return 0;
}

