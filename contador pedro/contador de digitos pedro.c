#include <stdio.h>

int contar_digitos (numero) {
	int contador = 0;
	
	while(numero != 0) {
		numero = numero / 10; 
		contador++;
	}
	return contador;
}
int main() {
	int numero;
	
	printf("ingresa un numero: ");
	scanf("%d", &numero);
	
	int cantidad_de_digitos =
	contar_digitos(numero);
	
	printf ("el maquiavelico numero ingresado tiene %d digitos\n", cantidad_de_digitos);
	
	return 0;
	
}
