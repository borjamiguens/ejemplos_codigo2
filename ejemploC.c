/*
comentario de varias lineas
*/

//comentarios

#include <stdio.h>
#include <conio.h>

int funcionSuma (int a, int b);


void main(){
	int n1, n2, suma;
	printf("\n Introduzca primer número: ");
	scanf("%d", &n1);
	printf("\n Introduzca segundo número: ");
	scanf("%d", &n1);
	suma=funcionSuma(n1,n2);
	printf("\n La suma es : %d", suma);
}

int funcionSuma (int a, int b){
	return a + b;
}