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
int witcher(){

   return 0
}

int main() {
    int accueilChoix=5;
    accueilChoix=accueil(accueilChoix);
    return 0;
}
