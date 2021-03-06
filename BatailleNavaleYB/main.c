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
 /**
  * @version 2.0
  * @details version totalement fini de la bataille naval
  */
  /**
   * @remark la version final comprends un menu d'aide une bataille naval totalemnt fonctionnelle et un menu quitter
   */
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <time.h>
//integration des Caractére spéciaux
#pragma execution_character_set("utf-8")
#define CASEGX 10
#define CASEGY 10
#define dimentonsGrille 10

char nom[15];
int grillechoisie = 0;
int score = 0;
int nbBateauxCoules=0;
//le tableau qui me sers de grille de jeux
int grille[4][dimentonsGrille][dimentonsGrille] = {{{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                                    {0, 0, 0, 4, 0, 0, 0, 0, 0, 0},
                                                    {0, 0, 0, 4, 0, 0, 0, 0, 0, 0},
                                                    {0, 0, 0, 4, 0, 0, 0, 0, 0, 0},
                                                    {0, 0, 0, 4, 0, 0, 0, 2, 2, 0},
                                                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                                    {0, 0, 0, 0, 0, 3, 3, 3, 0, 0},
                                                    {0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
                                                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}},

                                                   {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                                    {0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
                                                    {4, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                                    {4, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                                    {4, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                                    {4, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                                    {0, 0, 0, 0, 0, 0, 2, 2, 0, 0},
                                                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                                    {0, 3, 3, 3, 0, 0, 0, 0, 0, 0}},

                                                   {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                                    {0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
                                                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                                    {0, 3, 3, 3, 0, 0, 0, 0, 0, 0},
                                                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                                    {0, 0, 2, 0, 0, 0, 0, 0, 0, 0},
                                                    {0, 0, 2, 0, 0, 0, 0, 0, 0, 0},
                                                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                                    {0, 0, 0, 0, 0, 0, 4, 4, 4, 4}},

                                                   {{0, 0, 0, 0, 0, 0, 4, 4, 4, 4},
                                                    {0, 0, 0, 0, 0, 0, 0, 0, 2, 2},
                                                    {0, 0, 0, 0, 0, 0, 0, 3, 3, 3},
                                                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                                    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0}}};


//fonction qui donne les choix du Menu
int accueil(int choix) {
    printf("-----Bataille Navale-----\n");
    printf("\n-Bien venu sur la Bataille Navale Choisisez une option-\n");
    printf("\n1-Jouer");
    printf("\n2-aide");
    printf("\n3-quitter\n");
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
            //se switch ecrit le caractére pour faire en sorte d'avoir une croix ou autres
            switch (grille[grillechoisie][y][x]) {

                case 1: {
                    printf("   ");
                    break;
                }
                case 13: {
                    printf(" X ");
                    break;
                }
                case 5:
                case 6:
                case 7:
                case 8:{
                    printf(" T ");
                    break;
                }
                case 9:
                case 10:
                case 11:
                case 12: {
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
//fonction qui gere l'état de la grille
int comptenomdresdunetat(int etat){
    int i,j;
    int nbEtat=0;
    for(i = 0; i<=dimentonsGrille-1;i++){
        for(j = 0; j<=dimentonsGrille-1;j++){
            if(grille[grillechoisie][i][j] == etat){
                nbEtat+=1;
            }
        }
    }



    return nbEtat;
}
//fonction qui gére l'état des case de la grille
void changeEtatToucheACoule(int etat){
    int i,j;
    int nbEtat=0;
    for(i = 0; i<=dimentonsGrille-1;i++){
        for(j = 0; j<=dimentonsGrille-1;j++){
            if(grille[grillechoisie][i][j] == etat){
                grille[grillechoisie][i][j]+=4;

            }
        }
    }

}

//fonction qui gére le fait d'avoir un nombre de bataux coulé
void verifcoules(){
    int nbtouchebateau[4];
    int i;

    for(i=1;i<=4;i++){
        nbtouchebateau[i-1] = comptenomdresdunetat(i+4);

    }

    for(i=1;i<=4;i++){
        if(nbtouchebateau[i-1] == i){
            changeEtatToucheACoule(i+4);
            nbBateauxCoules+=1;
            score+=10;
        }
    }




}

//la fonction de tire elle demande les axe etc pour que le joueur puisse designer une case a attaquer
void tir() {
    char posY, posX;
    int j;
    printf("\n");
    printf("\nscore de %s = %d    ", nom, score);

    do {
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

    //switch qui s'occupe de gérer les tire
    switch (grille[grillechoisie][posY][posX]) {
        case 0: {
            grille[grillechoisie][posY][posX] = 13;
            score -= 1;
            break;
        }
        case 1:
        case 2:
        case 3:
        case 4: {
            grille[grillechoisie][posY][posX] += 4;
            score += 2;
            break;
        }
        default: {
            printf("\nVous ne pouvez pas retirer deux fois sur la même case");
            tir();
            break;
        }
    }

    verifcoules();

}
 // fonction du choix de la grille elle utilise le temps réelle pour faire en sorte que la grille sois random
int choixgrille() {
    long ms; // Milliseconds
    time_t s;  // Seconds
    struct timespec spec;

    clock_gettime(CLOCK_REALTIME, &spec);

    s = spec.tv_sec;
    ms = round(spec.tv_nsec / 1.0e6);
    if (ms <= 250) { grillechoisie = 0; }
    else if (ms >= 251 && ms <= 500) { grillechoisie = 1; }
    else if (ms >= 501 && ms <= 750) { grillechoisie = 2; }
    else if (ms >= 751 && ms < 999) { grillechoisie = 3; }


}

//fonction qui gére l'affichage de tout le jeux
void jeu() {
    int nbtir = 0;
    choixgrille();

    while(nbtir<30&&nbBateauxCoules<4) {
        GrilleJeux();
        tir();

    }


    GrilleJeux();
    if (nbBateauxCoules==4){
        printf("\nvous avez Gangné\n");
    }

    system("pause");
}

// fonction qui affiche le menu d'aide du jeux
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
            system("cls");
            printf("donner votre nom : ");
            scanf("%s", &nom);
            jeu();
            break;
        }
            //Menu aide
        case 2: {
            aide();
            break;
        }
            //Menu quitter
        case 3: {
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
