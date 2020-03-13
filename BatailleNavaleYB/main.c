/**
 * @author yoann bonzon
 * @date 11.03.2020
 * @version 0.01
 * @details creation du menu
 */
/**
 * @version 0.1
 * @details Menu jouer aide et quitter disponible
 */
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
//integration des Caractére spéciaux
#pragma execution_character_set("utf-8")

//variable qui donne les choix du Menu
int accueil(int choix) {
    printf("-----Bataille Navale-----\n");
    printf("\n-Bien venu sur la Bataille Navale Choisisez une option-\n");
    printf("\n1-Jouer");
    printf("\n2-pseudo");
    printf("\n3-aide");
    printf("\n4-quitter\n");
    scanf("%d", &choix);
    return choix;
}

int sadwich() {
    printf("-----BON JEUX-----");
    printf("\n   1  2  3  4  5  6  7  8  9  10");
    printf("\nA  /  /  /  /  /  /  /  /  /  /  ");
    printf("\nB  /  /  /  /  /  /  /  /  /  /  ");
    printf("\nC  /  /  /  /  /  /  /  /  /  /  ");
    printf("\nD  /  /  /  /  /  /  /  /  /  /  ");
    printf("\nE  /  /  /  /  /  /  /  /  /  /  ");
    printf("\nF  /  /  /  /  /  /  /  /  /  /  ");
    printf("\nG  /  /  /  /  /  /  /  /  /  /  ");
    printf("\nH  /  /  /  /  /  /  /  /  /  /  ");
    printf("\nI  /  /  /  /  /  /  /  /  /  /  ");
    printf("\nJ  /  /  /  /  /  /  /  /  /  /  ");
}

int pseudo() {
    printf("\n-----Menu de Création de Pseudo pour la Bataille Naval-----\n");
    printf("\n1 - Choisire un pseudo");
    printf("\n2 - Supprimer Ancien Pseudo");
    printf("\n3 - Voir le Score");
}

int aide() {
    printf("\n-----BIEN VENU SUR L'AIDE DE LA BATAILLE NAVALE-----\n");
    printf("\nO = Bateaux placé");
    printf("\nX = Case Attaquer");
    printf("\nT = Touché");
    printf("\nC = Coulée");
}

//variable qui gére le switche en reponse au menu
int witcher(int choix) {

    switch (choix) {
        //Menu Jouer
        case 1: {
            sadwich();
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
            system("pause");
            return 0;
        }
    }
    return choix;
}

// Fonction principale Main
int main() {
    SetConsoleOutputCP(65001);
    int accueilChoix = 5;
    accueilChoix = accueil(accueilChoix);
    witcher(accueilChoix);
    return 0;
}
