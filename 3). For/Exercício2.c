/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que imprime todos os n�meros inteiros de 1 a 100 em ordem decrescente
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	// Configura o idioma de acordo com a localiza��o
    setlocale(LC_ALL, "portuguese");

	// Vari�veis
    int k;
	
	// Processamento
    printf("Algoritmo dos n�meros inteiros.\n");
    for(k = 100; k >= 1; k--){
        printf(" %d ", k);
	}
	printf("\n");
    system("pause");
}
