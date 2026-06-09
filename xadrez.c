#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//funções void para implementar a recursividade na movimentação das peças
void mover_torre(int casas)
{
    if (casas  > 0) {
        printf("Direita\n"); //Imprime a direção do movimento
        mover_torre(casas - 1);
    }
}

void mover_bispo(int casas)
{ 
    if (casas <= 0)
        return;

    for (int vertical = 0; vertical < 1; vertical++)
    {
        printf("Cima, "); //Imprime a direção do movimento

        for (int horizontal = 0; horizontal < 1; horizontal++)
        {
            printf("Direita"); //Imprime a direção do movimento
        }
        printf("\n");
    }
    mover_bispo(casas - 1);
}

void mover_rainha(int casas)
{
    if (casas > 0)
    {
        printf("Esquerda\n"); //Imprime a direção do movimento
        mover_rainha(casas - 1);
    }
}

int main() {
  //Declaração de variáveis
  int opcao1, opcao2; //Variáveis para os menus
  int casas = 1; //Variáveis para a movimentação das peças

    printf("*** XADREZ ***");
    //Tabuleiro ilustrativo antes do início do jogo
    printf("\n");
    printf("    A  B  C  D  E  F  G  H \n");
    printf("8. |T||C||B||D||R||B||C||T|\n");
    printf("7. |p||p||p||p||p||p||p||p|\n");
    for(int j = 6; j >= 3; j--) 
    {
    printf("%d. | || || || || || || || |\n", j);
    }
    printf("2. |p||p||p||p||p||p||p||p|\n");
    printf("1. |T||C||B||D||R||B||C||T|\n");
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
        printf("4. Cavalo\n");
        printf("\n");
        printf("Digite sua opção: ");
        scanf("%d", &opcao2);
        printf("\n");

        switch(opcao2) {
        case 1:
            //Mover a Torre 5 casa para a direita
            printf("Você escolheu a Torre! Acompanhe sua movimentação!\n");
            printf("\n");

            printf("Digite a quantidade de casas que deseja mover: \n");
            scanf("%d", &casas);
            printf("\n");
            mover_torre(casas);
            printf("\n");
            break;

        case 2:
            //Mover o Bispo 5 casas na diagonal para cima e à direita
            printf("Você escolheu o Bispo! Acompanhe sua movimentação!\n");
            printf("\n");

            printf("Digite a quantidade de casas que deseja mover: \n");
            scanf("%d", &casas);
            printf("\n");
            mover_bispo(casas);
            printf("\n");
            break;
       
        case 3:
            //Mover a Rainha 8 casas para a esquerda
            printf("Você escolheu a Rainha! Acompanhe sua movimentação!\n");
            printf("\n");

            printf("Digite a quantidade de casas que deseja mover: \n");
            scanf("%d", &casas);
            printf("\n");
            mover_rainha(casas);
            printf("\n");
            break;
        
        case 4:
        //Mover o Cavalo em L
            printf("Você escolheu o Cavalo! Acompanhe sua movimentação!\n");
            printf("\n");

            for (int vertical = 1; vertical <=2; vertical++)
            {
                printf("Cima\n");
                
                if (vertical == 1)
                {
                    continue;
                }

                for (int horizontal = 1; horizontal <=1; horizontal++) 
                {
                    printf("Direita\n");
                    break;
                }
            }
            break;

        default:
           printf("\n");
           printf("Opção inválida\n");
           break;
         }
        
    printf("\n");
    printf("*** Partida encerrada! Até a próxima! ***\n");
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
        printf("\n");
        printf("Cavalo: Move-se em L.\n");
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
