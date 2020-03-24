/**
 * @author yoann bonzon
 * @date 11.03.2020
 * @version 0.01
 * @details creation du menu
 */
/**
 * @version 0.1
 * @details Menu jouer, aide et quitter disponible
 */
 /**
  * @version 0.1.1
  * @details les fonction sont mieux appeler et menu aide dispo et quitter fonctionne
  */
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
//integration des Caractére spéciaux
#pragma execution_character_set("utf-8")
#define CASEGX 10
#define CASEGY 10
#define dimentonsGrille 10
#define score 0

int grille[dimentonsGrille][dimentonsGrille] = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                                {0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
                                                {0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
                                                {0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
                                                {0, 0, 0, 1, 0, 0, 0, 1, 1, 0},
                                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                                {0, 0, 0, 0, 0, 1, 1, 1, 0, 0},
                                                {0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
                                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};

//fonction qui donne les choix du Menu
int accueil(int choix) {
    printf("-----Bataille Navale-----\n");
    printf("\n-Bien venu sur la Bataille Navale Choisisez une option-\n");
    printf("\n1-Jouer");
    printf("\n2-Score");
    printf("\n3-aide");
    printf("\n4-quitter\n");
    scanf("%d", &choix);
    return choix;
}

//fonction qui crées la grille de jeux
void GrilleJeux() {

    int x, y;
    system("cls");

    printf("-----BON JEUX-----");
    printf("\n    A   B   C   D   E   F   G   H   I   J\n");

    for (y = 0; y <= dimentonsGrille - 1; y++) {
        printf("%2d", y + 1);
        printf("|");
        for (x = 0; x <= dimentonsGrille - 1; x++) {
            int test = 3;
            switch (grille[y][x]) {

                case 1: {
                    printf("   ");
                    break;
                }
                case 2: {
                    printf(" X ");
                    break;
                }
                case 3: {
                    printf(" T ");
                    score+1;
                    break;
                }
                case 4: {
                    printf(" C ");
                    break;
                }
                default: {
                    printf("   ");
                    break;
                }
            }

            printf("|");
        }
        printf("\n");
    }


}

void tir() {
    char posY, posX;
    int j;
    printf("\n");

    do {
        printf("\nscore = %d    ",score+1);
        printf("Choisissez la position horizontale (A - J): ");
        scanf("%s", &posX);

        for (j = 0; j <= dimentonsGrille; j++) {
            if (posX == j + 97 || posX == j + 65) posX = j;
        }
    } while (posX < 0 || posX > dimentonsGrille);

    do {
        printf("Choisissez la position vertical (1 - 10):");
        scanf("%d", &posY);
        posY--;
    } while (posY < 0 || posY > dimentonsGrille);


    switch (grille[posY][posX]) {
        case 0: {
            grille[posY][posX] = 2;
            break;
        }
        case 1: {
            grille[posY][posX] = 3;
            break;
        }
        default: {
            printf("\nVous ne pouvez pas retirer deux fois sur la même case");
            tir();
            break;
        }
    }

}

void jeu() {
    int i;

    for (i = 0; i <= 20; i++) {
        GrilleJeux();
        tir();
    }

    GrilleJeux();
    system("pause");
}


int pseudo() {
    printf("\n-----Menu de Création de Pseudo pour la Bataille Naval-----\n");
    printf("\n1 - Choisire un pseudo");
    printf("\n2 - Supprimer Ancien Pseudo");
    printf("\n3 - Voir le Score\n");
    system("pause");

}

int aide() {
    printf("\n-----BIEN VENU SUR L'AIDE DE LA BATAILLE NAVALE-----\n");
    printf("\nO = Bateaux placé");
    printf("\nX = Case Attaquer");
    printf("\nT = Touché");
    printf("\nC = Coulée\n");
    system("pause");

}



//fonction qui gére le switche en reponse au menu
void MenuJeux(int choix) {

    switch (choix) {
        //Menu Jouer
        case 1: {
            jeu();
            break;
        }
            //Menu Pseudo et Score
        case 2: {
            pseudo();
            break;
        }
            //Menu Aide
        case 3: {
            aide();
            break;
        }
            //Bah quitter
        case 4: {
            break;
        }
    }
}


// Fonction principale Main
int main() {
    SetConsoleOutputCP(65001);
    int accueilChoix = 5;
    accueilChoix = accueil(accueilChoix);
    MenuJeux(accueilChoix);
    return 0;
}
