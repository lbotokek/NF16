//
//  tableau.c
//  OPENCLASSROOMS
//
//  Created by BOTOKEKY LEWIS on 05/03/2024.
//

#include "tableau.h"

int sommeTableau(int tableau[], int tailleTableau) {
    int resultat = 0;
    for (int i = 0; i < tailleTableau; i++) {
        resultat += tableau[i];
    }
    
    return resultat;
}

double moyenneTableau(int tableau[], int tailleTableau) {
    double resultat = 0;
    // Corrected call to sommeTableau with proper parameters
    resultat = (double)sommeTableau(tableau, tailleTableau) / tailleTableau;
    return resultat;
}
