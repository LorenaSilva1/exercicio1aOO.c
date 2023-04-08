#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    int escolha_jogador, computador;
    srand(time(NULL));

    printf("Digite um Número para Jogar\n");
    printf(" 1- Pedra\n");
    printf(" 2- Papel\n");
    printf(" 3- Tesoura\n");
    printf(">");
    scanf("%d\n", &escolha_jogador);

    computador = rand() % 3 + 1;

    if(escolha_jogador == computador){
        printf("Empate!\n"); 
    }
    else if(escolha_jogador == 1 && computador == 2 || escolha_jogador == 2 && computador == 3 || escolha_jogador == 3 && computador == 1){
        printf("Computador ganhou!\n");
    }
    else{
        printf("Jogador ganhou!\n");
    }


    return 0;
}

