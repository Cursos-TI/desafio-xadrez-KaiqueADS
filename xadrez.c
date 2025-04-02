//Xadrez: Desafio Aventureiro

#include <stdio.h>

int main(){

    //Torre

    printf("\nTorre -\n");

    for (int i = 0; i < 5; i++){
        printf("Cima\n");
    }

    //Bispo

    printf("\nBispo - \n");

    int j = 0;

    do {
        printf("Cima, Direita\n");
        j++;
    } while (j < 5);
    
    // rainha

    printf("\nRainha -\n");

    int k = 0;

    while (k < 8) {
        printf("Esquerda\n");
        k++;
    }

    // cavalo

    int l = 0;

    printf("\nCavalo -\n");
    
    for (l; l < 1; l++) { // movimento pra direita

        int m = 0;

        while (m < 2) { // movimento pra cima
            printf("Cima\n");
            m++;
        }
        
        printf("Direita\n");
    }


    return 0;
}