#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// EXERCICE 1

int rayon;
float surface;
int x;
int y;
int temp;


int main(int argc, const char * argv[]) {
    
    // 1
    /*int main(int argc, const char * argv[]) {
     return 0;
    }*/
    
    
    //2
    #define PI 3.14

    //3
    
    
    surface = PI*rayon*rayon;

    //4
    rayon = 10;
    
    
    //5
    /*printf("Donnez la valeur de x : ");
    scanf("%d", &x );
    
    printf("Donnez la valeur de y : ");
    scanf("%d", &y );
    
    printf("Les deux nombres sont %d et %d \n", x, y);
    
    temp = x;
    x = y;
    y = temp;
    
    printf("Les deux nombres sont %d et %d\n", x, y);*/
    
    
//    6
//    /*char c;
//    c = 7;
//    printf("%c\n", c);
//    c = 98;
//    printf("%c\n", c);*/
    
    
//    EXERCICE 2
    
//    char c;
//        printf("\nBonjour\n");
//        printf("Entrez un caractère : ");
//        scanf("%c", &c); // Ajout d'un espace pour ignorer les blancs précédents
//        printf("\n\nSigne : %c, Code décimal : %d, Code ASCII hexadécimal : %x \n", c, c, c);
    
//    int x;
//    printf("Entrez un entier : ");
//    scanf("%d", &x); // Ajout d'un espace pour ignorer les blancs précédents
//    printf("\n\nDécimal : %d, octal : %o, hexadécimal : %x \n", x, x, x);
//    
//    EXERCICE 3;
    
//    int x;
//    printf("Entrez un entier : ");
//    scanf("%d", &x);
//    
//    if (0<x && x<10) {
//        printf("compris entre 0 et 10");
//    }
//    else if ((7<x && x<20) || (x == 27)) {
//        printf("compris 7 20 ou 27");
//    }
//    else if (x != 0) {
//        printf("nombre non nul");
//    }
//    else if ((x%10)>=1) {
//        printf("c'est un chiffre");
//    }
//    char c;
//    printf("\nEntrez un caractère : ");
//    scanf(" %c", &c);
//
//    if (isdigit(c)) {
//            printf("\nLe caractère '%c' est un chiffre.\n", c);
//        } else if (isalpha(c)) {
//            printf("\nLe caractère '%c' est une lettre de l'alphabet.\n", c);
//        } else {
//            printf("\nLe caractère '%c' n'est ni un chiffre ni une lettre de l'alphabet.\n", c);
//        }
    
//    int t;
//    t = getchar();
//    
//    switch (t) {
//        case '1':
//            printf("un");
//            break;
//            
//        case '2':
//            printf("deux");
//            break;
//            
//        case '3':
//            printf("trois");
//            break;
//            
//        default:
//            printf("c'est un autre caractère");
//            break;
//    }
    
//    EXERCICE 4
    
//    float y = 5/2;
//    printf("%f", y);
    
    
//    char c;
//        printf("Entrez un caractère : ");
//        c = getchar(); // Lire un caractère
//
//        // Vérifier si c'est une lettre minuscule et la convertir en majuscule
//        if (islower(c)) {
//            c = toupper(c);
//        }
//
//        printf("Caractère transformé : %c\n", c); // Afficher le caractère transformé
//
    
    
    char a = 'a';
    char A = 'A';
    int difference = a - A - 1; // Soustraire 1 pour exclure 'a' et 'A' eux-mêmes

        printf("Nombre de caractères compris entre 'a' et 'A' dans la table ASCII : %d\n", difference);

    
    return 0;
    
    
    
}











