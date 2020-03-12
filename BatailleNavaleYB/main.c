/**
 * @author yoann bonzon
 * @date 11.03.2020
 * @version 0.1
 * @details creation du menu
 */
#include <stdio.h>
#include <stdlib.h>

int accueil(int choix) {
    printf("-----Bataille Navale-----\n");
    printf("\n-Bien venu sur la Bataille Navale Choisisez une option-\n");
    printf("\n1-Jouer");
    printf("\n2-pseudo");
    printf("\n3-aide");
    printf("\n4-quitter");
    scanf("%d",&choix);
    return choix;
}
int witcher(int choix){

    switch (choix){
        case 1:{
            printf("-----BON JEUX-----");
            break;
        }
        case 2:{
            printf("-----PSEUDO DU JEUX ET SCORE");
            break;
        }
        case 3:{
            printf("\n-----AiDE JEUX-----\n");
            printf("");
            printf("");

            break;
        }
        case 4:{
            break;
        }
    }
   return choix;
}

int main() {
    int accueilChoix=5;
    accueilChoix=accueil(accueilChoix);
    witcher(accueilChoix);
    return 0;
}
