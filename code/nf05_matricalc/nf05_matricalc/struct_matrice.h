#include <stdio.h>

//structure Matrice contient le nom, le taille et les contenues d'une matrice
struct Matrice{
	char* nom;
	int taille_col;
	int taille_ligne;
	float** matrice;
};
