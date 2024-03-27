#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#include "tableau.h"


int main(int argc, char** argv) {
    int tableau[] = {2, 3, 4}; // Déclaration et initialisation du tableau
    int tailleTableau = 3; // Calcul de la taille du tableau
    int somme = sommeTableau(tableau, tailleTableau); // Appel de la fonction sommeTableau
    double moyenne = moyenneTableau(tableau, tailleTableau);
    
    printf("La somme des éléments du tableau est : %d\n", somme); // Affichage de la somme
    printf("La moyenne des éléments du tableau est : %f\n", moyenne);
    
    return 0;
}




