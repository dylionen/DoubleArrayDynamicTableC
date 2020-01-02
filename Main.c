#include<stdio.h>
#include<stdlib.h>

const VALUE_X = 10;
const VALUE_Y = 5;

//Dynamiczna tablica dwuwymiarowa

int main() {
	int** tablica = (int**) malloc(sizeof(int) * VALUE_X);

	for (int i = 0; i < VALUE_X; i++) {
		tablica[i] = (int*)malloc(sizeof(int) * VALUE_Y);
	}


	for (int i = 0; i < VALUE_X; i++) {
		for (int j = 0; j < VALUE_Y; j++) {
			tablica[i][j] = i * j;
		}
	}

	for (int i = 0; i < VALUE_X; i++) {
		for (int j = 0; j < VALUE_Y; j++) {
			printf("Polozenie (X,Y): (%d,%d) ma wartosc: %d, adres komorki to: %d \n", i, j, tablica[i][j],&tablica[i][j]);
		}
	}


	return 0;
}