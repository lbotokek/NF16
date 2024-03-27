//
//  exo4.c
//  TP1
//
//  Created by BOTOKEKY LEWIS on 19/03/2024.
//

#include "exo4.h"


//4.1
void permuter(int *a, int *b) {
    printf("Avant permutation : a = %d, b = %d\n", *a, *b);
    
    // Permutation à l'aide d'une variable temporaire
    int temp = *a;
    *a = *b;
    *b = temp;
    
    printf("Après permutation : a = %d, b = %d\n", *a, *b);
}

//4.2
// Le changement de valeur n'aurait pas été effectué car la fonction ne peux pas accéder directement à la mémoire

//4.3 et 4.4
void affichepointeur(int i, int *j) {
    printf("La variable i vaut : %d et la valeur pointée par j est : %d \n", i, *j);
    (*j)++;
    printf("i = %d \n", i);
    i = i*5;
    printf("Donnée pointée par j = %d \n", *j);
    j++;
    printf("Donnée pointée par j après incrémentation de l'adresse = %d \n", *j);
}

//4.5 et 4.6
void remplirEtAfficherTableau(int tableau[][4], int lignes, int colonnes) {
    int p = 12;
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            *(*(tableau + i) + j) = p; // Utilisation de la notation de pointeur
            p++;
            printf("%d ", *(*(tableau + i) + j));
        }
        printf("\n"); // Nouvelle ligne après chaque ligne du tableau
    }
}

//4.7
//void decalage(const int Nb) {
//    int tableau[Nb];
//    for (int i = 0; i<Nb; i++) {
//        <#statements#>
//    }
//}





