#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "struct_matrice.h"

int lire(FILE *ptr, struct Matrice *tab_matrice) {
	//struct Matrice *tab_matrice = (struct Matrice *) malloc(sizeof(struct Matrice));
	int i, j, k;

	i = 0;

	while (!feof(ptr)) {

		//if (i != 0) {
		//	tab_matrice = (struct Matrice *) realloc(tab_matrice, i * sizeof(struct Matrice));
		//}

		tab_matrice[i].nom = (char *) malloc(sizeof(char));

		fscanf(ptr, "%s %d %d ", tab_matrice[i].nom, &tab_matrice[i].taille_ligne, &tab_matrice[i].taille_col);

		if (tab_matrice[i].taille_ligne == 0 || tab_matrice[i].taille_col == 0) continue;

		// declaration dynamique, première dimension, lignes de la matrice
		tab_matrice[i].matrice = (float **) malloc(tab_matrice[i].taille_ligne * sizeof(float *));

		for (j = 0; j < tab_matrice[i].taille_ligne; j++){

			// declaration dynamique, seconde dimension, colonnes de la ligne
			tab_matrice[i].matrice[j] = (float *) malloc(tab_matrice[i].taille_col * sizeof(float));

			// lire les éléments
			for (k = 0; k < tab_matrice[i].taille_col; k++){

				fscanf(ptr, "%f", &tab_matrice[i].matrice[j][k]);

				if (j == tab_matrice[i].taille_ligne - 1 && k == tab_matrice[i].taille_col - 1) {
					// le dernier élément de la matrice, scanner le retour chariot
					fscanf(ptr, "\n");
				} else {
					// scanner un espace après chaque élément de la matrice
					fscanf(ptr, " ");
				}
			}
		}

		i++;
	}

	return i;
}

void enregistrer(FILE *ptr, struct Matrice* tab_matrice, int n) {
	if (n == 0) return;

	int i, j, k;

	for (i = 0; i < n; i++) {
		if (tab_matrice[i].taille_ligne == 0 || tab_matrice[i].taille_col == 0) continue;

		// info de base
		fprintf(ptr, "%s %d %d ", tab_matrice[i].nom, tab_matrice[i].taille_ligne, tab_matrice[i].taille_col);

		for (j = 0; j < tab_matrice[i].taille_ligne; j++){
			for (k = 0; k < tab_matrice[i].taille_col; k++){
				if (j == tab_matrice[i].taille_ligne - 1 && k == tab_matrice[i].taille_col - 1) {
					// le dernier élément de la matrice, ne plus ajouter de l'espace
					fprintf(ptr, "%f", tab_matrice[i].matrice[j][k]);
				} else {
					// ajouter un espace après chaque élément de la matrice
					fprintf(ptr, "%f ", tab_matrice[i].matrice[j][k]);
				}
			}
		}

		// retour chariot après chaque enregistrement de matrice
		fprintf(ptr, "\n");
	}
}

void afficher (struct Matrice* tab_matrice, int n){
	int i,j,k;
	for (i=0; i<n; i++)
	{
		printf("%s \n",tab_matrice[i].nom);
		printf("taille col : %d \n",tab_matrice[i].taille_col);
		printf("taille ligne : %d \n",tab_matrice[i].taille_ligne);
		for (j=0; j<tab_matrice[i].taille_ligne; j++){
			for (k=0; k<tab_matrice[i].taille_ligne; k++){
				printf("[%d] [%d] : %f\n", j, k, tab_matrice[i].matrice[j][k]);
			}
		}
	}
}

//supprimer un élément dans le tableau de matrices, faire attention au changement de compteur
int supprimer(struct Matrice *tab_matrice, int index, int n) {
	int i;

	for (i = index; i < n - 1; i++) {
		tab_matrice[i] = tab_matrice[i + 1];
	}
	
	return n - 1;
}

//vider le tableau de matrices
int vider(struct Matrice *tab_matrice){
	tab_matrice = (struct Matrice*) malloc(sizeof(struct Matrice));
	return 0;
}

/*
void main(){
	struct Matrice* tab_matrice;
	FILE* ptr;
	char name[20] = {'d', 's', '.', 't', 'x', 't'};
	int i;

	tab_matrice = (Matrice*) malloc(sizeof(Matrice));
	tab_matrice[0].nom = "ABC";
	tab_matrice[0].taille_col = 2;	
	tab_matrice[0].taille_ligne = 2;
	tab_matrice[0].matrice = (float **) malloc(2 * sizeof(float *));
	for (i = 0; i < 2; i++) {
		tab_matrice[0].matrice[i] = (float *) malloc(2 * sizeof(float));
	}
	
	tab_matrice[0].matrice[0][0] = 1;
	tab_matrice[0].matrice[0][1] = 2;
	tab_matrice[0].matrice[1][0] = 3;
	tab_matrice[0].matrice[1][1] = 4;

	tab_matrice[1].matrice = (float **) malloc(sizeof(float *));
	tab_matrice[1].matrice[0] = (float *) malloc(sizeof(float));

	tab_matrice[1].nom = "de";
	tab_matrice[1].taille_col = 1;
	tab_matrice[1].taille_ligne = 1;
	tab_matrice[1].matrice[0][0] = 5;

	afficher (tab_matrice, 2);
	
	ptr = fopen(name, "w");
	enregistrer2(ptr, tab_matrice, 2);
	fclose(ptr);

	ptr = fopen(name, "r");
	tab_matrice = lire2(ptr);
	fclose(ptr);

	afficher (tab_matrice, 2);
}
*/