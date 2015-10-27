#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include "struct_matrice.h"

void log(char *msg) {
	FILE *ptr = fopen("log.log", "w");
	fprintf(ptr, "%s\n", msg);
	fclose(ptr);
}

struct Matrice* addition(struct Matrice* M1,struct Matrice* M2)//Fonction pour calculer l'addition des deux matrice choisies par l'utilisateur.
{
    int i,j;
    struct Matrice* M_add = (struct Matrice *) malloc(sizeof(struct Matrice));//Matrice pour stocker le resultat
    if((M1->taille_col == M2->taille_col)&&(M1->taille_ligne == M2->taille_ligne))//Pour determiner si les duex matrice ont la meme taille
    {
		M_add->taille_col = M1->taille_col;
		M_add->taille_ligne = M1->taille_ligne;
        M_add->matrice = (float**) malloc(M1->taille_ligne * sizeof(float*));
        for(i=0;i<M1->taille_ligne;i++)
        {
            M_add->matrice[i]=(float*) malloc(M1->taille_col*sizeof(float));
        }
        for(i=0;i<M1->taille_ligne;i++)
        {
            for(j=0;j<M1->taille_col;j++)
            {
                M_add->matrice[i][j]=M1->matrice[i][j] + M2->matrice[i][j];//Faire l'addition
            }
        }
        return M_add;
    }
    else//Le cas que les deux matrice ont deux taille differentes
    {
        return NULL;
    }
}

struct Matrice* soustraction(struct Matrice* M1,struct Matrice* M2)//Fonction pour calculer la soustraction des deux matrice choisies par l'utilisateur.
{
    int i,j;
    struct Matrice* M_sous = (struct Matrice *) malloc(sizeof(struct Matrice));//Matrice pour stocker le resultat
    if((M1->taille_col==M2->taille_col)&&(M1->taille_ligne==M2->taille_ligne))//Pour determiner si les duex matrice ont la meme taille
    {
		M_sous->taille_col = M1->taille_col;
		M_sous->taille_ligne = M1->taille_ligne;
        M_sous->matrice=(float**)malloc(M1->taille_ligne*sizeof(float*));
        for(i=0;i<M1->taille_ligne;i++)
        {
            M_sous->matrice[i]=(float*)malloc(M1->taille_col*sizeof(float));
        }
        for(i=0;i<M1->taille_ligne;i++)
        {
            for(j=0;j<M1->taille_col;j++)
            {
                M_sous->matrice[i][j] = M1->matrice[i][j] - M2->matrice[i][j];//Faire la soustraction
            }
        }
        return M_sous;
    }
    else//Le cas que les deux matrice ont deux taille differentes
    {
        return NULL;
    }
}

//Calculer la multiplication des deux matrices
struct Matrice* multiplication1(struct Matrice* M1,struct Matrice* M2){
    int c,d,k;
	int i;
    struct Matrice* M_mul1 = (struct Matrice *) malloc(sizeof(struct Matrice));

    if ( M1->taille_col != M2->taille_ligne ){
        return NULL;
    }
    else
    {
        M_mul1->taille_ligne = M1->taille_ligne;
        M_mul1->taille_col = M2->taille_col;

		// init matrice
		M_mul1->matrice = (float **) malloc(M_mul1->taille_ligne * sizeof(float *));
		for (i = 0; i < M_mul1->taille_ligne; i++) {
			M_mul1->matrice[i] = (float *) malloc(M_mul1->taille_col * sizeof(float));
		}

		// calcul
        for ( c = 0 ; c < M1->taille_ligne; c++ )
        {
            for ( d = 0 ; d < M2->taille_col ; d++ )
            {
				M_mul1->matrice[c][d] = 0;

                for ( k = 0 ; k < M1->taille_col ; k++ )
                {
                    M_mul1->matrice[c][d] += M1->matrice[c][k] * M2->matrice[k][d];
                }
            }
        }
        return M_mul1;
    }
}

//Calculer la multiplication entre une matrice et une chiffre
struct Matrice multiplication2(struct Matrice M1, float c){
    int  i,j;

	// init
    struct Matrice* M_mul2 = (struct Matrice *) malloc(sizeof(struct Matrice));
    M_mul2->taille_col = M1.taille_col;
    M_mul2->taille_ligne = M1.taille_ligne;
	M_mul2->matrice = (float **) malloc(M_mul2->taille_ligne * sizeof(float *));
	for ( i = 0 ; i < M_mul2->taille_ligne ; i++ )
	{
		M_mul2->matrice[i] = (float *) malloc(M_mul2->taille_col * sizeof(float));
        for ( j = 0 ; j < M_mul2->taille_col ; j++ )
		{
			M_mul2->matrice[i][j] = 0;
		}
	}

    for ( i = 0 ; i < M1.taille_ligne ; i++ )
      {
        for ( j = 0 ; j < M1.taille_col ; j++ )
        {
          M_mul2->matrice[i][j] += M1.matrice[i][j] * c;
        }
      }
    return *M_mul2;
}

//Détecter si la matrice est carré, sioui, return 1, sinon return 0
int validition_carre(struct Matrice M1){
	 if (M1.taille_col != M1.taille_ligne){
        return 0;
    }
	 else{
		 return 1;
	 }
}

struct Matrice puissance(struct Matrice M1, int p){
    int i;
    struct Matrice *M_puissance = &M1;
        //Calculer la puissance
       for (i=0; i<p - 1; i++){
            M_puissance = multiplication1(M_puissance, &M1);
	   }

       return *M_puissance;
}

float determinant(struct Matrice M){
    int i, j, k;
    float det,ratio;
	struct Matrice *M1 = (struct Matrice *) malloc(sizeof(struct Matrice));
	M1->nom = M.nom;
	M1->taille_ligne = M.taille_ligne;
	M1->taille_col = M.taille_col;
	M1->matrice = (float **) malloc(M1->taille_ligne * sizeof(float *));
	for (i = 0; i < M1->taille_ligne; i++) {
		M1->matrice[i] = (float *) malloc(M1->taille_col * sizeof(float));
		for (j = 0; j < M1->taille_col; j++) {
			M1->matrice[i][j] = M.matrice[i][j];
		}
	}

        // Convertir la matrice ¨¤ une matrice triangulaire
        for(i = 0; i < M1->taille_ligne; i++){
            for(j = 0; j < M1->taille_col; j++){
                if(j>i){
                    ratio = M1->matrice[j][i]/M1->matrice[i][i];
                    for(k = 0; k < M1->taille_col; k++){
                        M1->matrice[j][k] -= ratio * M1->matrice[i][k];
                    }
                }
			}
        }

        //Calculer le d¨¦terminant
        det = 1;
        for(i = 0; i < M1->taille_ligne; i++){
            det *= M1->matrice[i][i];
        }
    return det;
}

 struct Matrice* inverse(float **matrice, int n)  
{  
    int *is = new int[n];  
    int *js = new int[n];  
    int i,j,k;  
    float d,p; 

	// copie de matrice
	float **a;

	// clone
	a = (float **) malloc(n * sizeof(float *));
	for ( i = 0 ; i < n ; i++ ){
		a[i] = (float *) malloc(n * sizeof(float));
		for ( j = 0 ; j < n ; j++ ){
			a[i][j] =  matrice[i][j];
		}
	}

	struct Matrice* M_inv = (struct Matrice *) malloc(sizeof(struct Matrice));
        M_inv->taille_col = n;
        M_inv->taille_ligne = n;
		M_inv->matrice = (float **) malloc(M_inv->taille_ligne * sizeof(float *));
		for ( i = 0 ; i < M_inv->taille_ligne ; i++ )
	{
		M_inv->matrice[i] = (float *) malloc(M_inv->taille_col * sizeof(float));
        for ( j = 0 ; j < M_inv->taille_col ; j++ )
		{
			M_inv->matrice[i][j] = 0;
		}
	}

	//Calculer l'inverse
    for ( k = 0; k < n; k++)  
    {  
        d = 0;  
        for (i=k; i<=n-1; i++)  
            for (j=k; j<=n-1; j++)  
            {  
                p=fabs(a[i][j]);  
                if (p>d) { d=p; is[k]=i; js[k]=j;}  
            }  
            if ( 0 == d )  
            {  
                free(is); free(js);
                return NULL;  
            }  
            if (is[k]!=k)  
                for (j=0; j<=n-1; j++)  
                {  
                    p=a[k][j];  
                    a[k][j]=a[is[k]][j];  
                    a[is[k]][j]=p;  
                }  
            if (js[k]!=k)  
                for (i=0; i<=n-1; i++)  
                {  
                    p=a[i][k];  
                    a[i][k]=a[i][js[k]];  
                    a[i][js[k]]=p;  
                }  
            a[k][k] = 1.0/a[k][k];  
            for (j=0; j<=n-1; j++)  
                if (j!=k)  
                {  
                    a[k][j] *= a[k][k];  
                }  
            for (i=0; i<=n-1; i++)  
                if (i!=k)  
                    for (j=0; j<=n-1; j++)  
                        if (j!=k)  
                        {  
                            a[i][j] -= a[i][k]*a[k][j];  
                        }  
            for (i=0; i<=n-1; i++)  
                if (i!=k)  
                {  
                    a[i][k] = -a[i][k]*a[k][k];  
                }  
    }  
    for ( k = n-1; k >= 0; k--)  
    {  
        if (js[k]!=k)  
            for (j=0; j<=n-1; j++)  
            {  
                p = a[k][j];  
                a[k][j] = a[js[k]][j];  
                a[js[k]][j]=p;  
            }  
            if (is[k]!=k)  
                for (i=0; i<=n-1; i++)  
                {   
                    p = a[i][k];  
                    a[i][k]=a[i][is[k]];  
                    a[i][is[k]] = p;  
                }  
    }  
	M_inv->matrice = a;
    free(is); free(js);  
    return M_inv;  
}   

float Norme(struct Matrice M)//Fonctionpour calculer la norme
{
    float norme;
    int i,j;
    norme=0;
    for(i=0;i<M.taille_ligne;i++)
            {
                for(j=0;j<M.taille_col;j++)
                {
                    norme+=(M.matrice[i][j])*(M.matrice[i][j]);
                }
            }
     norme=sqrt(norme);
     return norme;
}

float Trace(struct Matrice M)//Fonction pour calculer la trace
{
    float trace;
    int i;
    trace=0;
        for(i=0;i<M.taille_col;i++)
        {
           trace=trace+M.matrice[i][i];
        }
        return trace;
}

int validation_de_solution(struct Matrice A,struct Matrice b)
{
    int i,j;
    float det;
    det=determinant(A);
    if((A.taille_ligne==b.taille_ligne)&&(b.taille_col==1))
    {
        if((A.taille_col>A.taille_ligne)||det==0)
        {
            return 2;//Il y a plusieurs solutions
        }
        else if(A.taille_col<b.taille_ligne)
        {
            return 0;//Il n'y a pas de solution
        }
        else
        {
            return 1;//Il n'y a qu'une solution
        }
    }
    else
    {
        return -1;//La taille des deux matrice sont incorrectes
    }
}


struct Matrice* Matrice_Lineaire(struct Matrice A,struct Matrice b)
{
	int i,j;
    struct Matrice* x = (struct Matrice *) malloc(sizeof(struct Matrice));
    struct Matrice* MA;
	x->taille_col = 1;
    x->taille_ligne = A.taille_ligne;
	x->matrice = (float **) malloc(x->taille_ligne * sizeof(float *));
	for ( i = 0 ; i < x->taille_ligne ; i++ )
	{
		x->matrice[i] = (float *) malloc(x->taille_col * sizeof(float));
        for ( j = 0 ; j < x->taille_col ; j++ )
		{
			x->matrice[i][j] = 0;
		}
	}
    MA = inverse(A.matrice, A.taille_ligne);
	/* DEBUG */
	/*
	FILE *ptr = fopen("log.log", "w");
	for (i = 0; i < MA->taille_ligne; i++) {
		for (j = 0; j < MA->taille_col; j++) {
			fprintf(ptr, "%f\t", MA->matrice[i][j]);
		}
		fprintf(ptr, "\n");
	}
	fclose(ptr);
	/* ******** */
    x = multiplication1(MA, &b);
    return x;  
}
