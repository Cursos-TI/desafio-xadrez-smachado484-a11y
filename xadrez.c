#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

  //Declaração de variáveis
  int opcao1, opcao2; //Variáveis para os menus
  int bispo = 1, rainha = 1; //Variáveis para a movimentação das peças

    printf("*** XADREZ ***");
    printf("\n");
    printf("*** Bem-vindo ao jogo! ***\n");
    printf("\n");

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao1);
    printf("\n");

    switch(opcao1) 
    {
        case 1:
        printf("Escolha qual peça você quer movimentar\n");
        printf("1. Torre\n");
        printf("2. Bispo\n");
        printf("3. Rainha\n");
        printf("\n");
        printf("Digite sua opção: ");
        scanf("%d", &opcao2);
        printf("\n");

        switch(opcao2) {
        case 1:
            //Mover a Torre 5 casa para a direita
            printf("Você escolheu a Torre! Acompanhe sua movimentação!\n");
            printf("\n");

            for (int torre = 0; torre < 5; torre++) {
                printf("Direita\n"); //Imprime a direção do movimento
            }
            break;

        case 2:
            //Mover o Bispo 5 casas na diagonal para cima e à direita
            printf("Você escolheu o Bispo! Acompanhe sua movimentação!\n");
            printf("\n");

            while (bispo <= 5)
            {
                printf("Cima, Direita\n");
		        bispo++;	
	        }
            break;
       
        case 3:
            //Mover a Rainha 8 casas para a esquerda
            printf("Você escolheu a Rainha! Acompanhe sua movimentação!\n");
            printf("\n");

            do {
		        printf("Esquerda\n");
                rainha++;
            } while (rainha <= 8);
                
            break;

        default:
           printf("\n");
           printf("Opção inválida\n");
           break;
         }
    break;
    
    case 2:
    printf("*** Regras de Movimentação das Peças ***\n");
    printf("\n");
    printf("Cada peça se movimenta da seguinte forma:\n");
    printf("\n");
    printf("Torre: Move-se em linha reta horizontalmente ou verticalmente.\n");
    printf("\n");
    printf("Bispo: Move-se na diagonal.\n");
    printf("\n");
    printf("Rainha: Move-se em todas as direções.\n");
    break;

    case 3:
        printf("\n");
        printf("*** Partida encerrada! Até a próxima! ***\n");
    break;

    default:
        printf("\n");
        printf("Opção inválida\n");
        printf("*** Partida encerrada! Até a próxima! ***\n");
    break;
    }
 
    return 0;
}
