#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char state1;
    char stateCode1[3];
    char stateName1[20];
    int cardPopulation1;
    float cardArea1;
    float cardPIB1;
    int cardTouristPoints1;

    char state2;
    char stateCode2[3];
    char stateName2[20];
    int cardPopulation2;
    float cardArea2;
    float cardPIB2;
    int cardTouristPoints2;
    
    // Carta 1
    printf("Digite o estado da carta 1: ");
    scanf(" %c", &state1);
    printf("Digite o código da carta 1: ");
    scanf(" %s", stateCode1);
    printf("Digite o nome da carta 1: ");
    scanf(" %s", stateName1);
    printf("Digite a população da carta 1: ");
    scanf("%d", &cardPopulation1);
    printf("Digite a área da carta 1: ");
    scanf("%f", &cardArea1);
    printf("Digite o PIB da carta 1: ");
    scanf("%f", &cardPIB1);
    printf("Digite o número de pontos turísticos da carta 1: ");
    scanf("%d", &cardTouristPoints1);
    
    printf("\nCarta 1\n");
    printf("Estado: %c\n", state1);
    printf("Código: %s\n", stateCode1);
    printf("Nome: %s\n", stateName1);
    printf("População: %d\n", cardPopulation1);
    printf("Área: %.2f km²\n", cardArea1);
    printf("PIB: %.2f bilhoes de reais\n", cardPIB1);
    printf("Numero de pontos Turísticos: %d\n", cardTouristPoints1);

    // Carta 2
    printf("\nDigite o estado da carta 2: ");
    scanf(" %c", &state2);
    printf("Digite o código da carta 2: ");
    scanf(" %s", stateCode2);
    printf("Digite o nome da carta 2: ");
    scanf(" %s", stateName2);
    printf("Digite a população da carta 2: ");
    scanf("%d", &cardPopulation2);
    printf("Digite a área da carta 2: ");
    scanf("%f", &cardArea2);
    printf("Digite o PIB da carta 2: ");
    scanf("%f", &cardPIB2);
    printf("Digite o número de pontos turísticos da carta 2: ");
    scanf("%d", &cardTouristPoints2);

    printf("\nCarta 2\n");
    printf("Estado: %c\n", state2);
    printf("Código: %s\n", stateCode2);
    printf("Nome: %s\n", stateName2);
    printf("População: %d\n", cardPopulation2);
    printf("Área: %.2f km²\n", cardArea2);
    printf("PIB: %.2f bilhões de reais\n", cardPIB2);
    printf("Numero de pontos Turísticos: %d\n", cardTouristPoints2);

    return 0;
}
