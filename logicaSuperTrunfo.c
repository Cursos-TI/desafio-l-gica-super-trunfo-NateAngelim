#include <stdio.h> 

int main() {
  
    char estado1;
    char codigo_carta1[5];
    char nome_cidade1[50];
    unsigned long int populacao1;
    float area_km2_1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1;

    char estado2;
    char codigo_carta2[5];
    char nome_cidade2[50];
    unsigned long int populacao2;
    float area_km2_2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    int escolha_atributo; 

    printf(" Cadastro da Primeira Carta \n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (Ex: A01): ");
    scanf("%s", codigo_carta1);

    printf("Nome da Cidade : ");
    scanf("%s", nome_cidade1);

    printf("Populacao (unsigned long int): ");
    scanf("%lu", &populacao1);

    printf("Area (em km2): ");
    scanf("%f", &area_km2_1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);
    
    if (area_km2_1 > 0) {
        densidade_populacional1 = (float)populacao1 / area_km2_1;
    } else {
        densidade_populacional1 = 0.0; 
    }

   
    if (populacao1 > 0) {
        pib_per_capita1 = pib1 / (float)populacao1;
    } else {
        pib_per_capita1 = 0.0; 
    }

   
    float inverso_densidade1 = 0.0f;
    if (densidade_populacional1 > 0.0f) {
        inverso_densidade1 = 1.0f / densidade_populacional1;
    }
    super_poder1 = (float)populacao1 + area_km2_1 + pib1 + (float)pontos_turisticos1 + pib_per_capita1 + inverso_densidade1;


    printf("\n Cadastro da Segunda Carta \n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (Ex: A01): ");
    scanf("%s", codigo_carta2);

    printf("Nome da Cidade : ");
    scanf("%s", nome_cidade2);

    printf("Populacao (unsigned long int): ");
    scanf("%lu", &populacao2);

    printf("Area (em km2): ");
    scanf("%f", &area_km2_2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);

    if (area_km2_2 > 0) {
        densidade_populacional2 = (float)populacao2 / area_km2_2;
    } else {
        densidade_populacional2 = 0.0;
    }

    if (populacao2 > 0) {
        pib_per_capita2 = pib2 / (float)populacao2;
    } else {
        pib_per_capita2 = 0.0;
    }

    float inverso_densidade2 = 0.0f;
    if (densidade_populacional2 > 0.0f) {
        inverso_densidade2 = 1.0f / densidade_populacional2;
    }
    super_poder2 = (float)populacao2 + area_km2_2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2 + inverso_densidade2;


    printf("\n Cartas Cadastradas \n");

    printf("\n Primeira Carta \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da Carta: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %lu habitantes\n", populacao1);
    printf("Area: %.2f km^2\n", area_km2_1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\n Segunda Carta \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da Carta: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %lu habitantes\n", populacao2);
    printf("Area: %.2f km^2\n", area_km2_2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    printf("\n Escolha o Atributo para Comparação \n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numero de Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("Digite o numero da sua escolha: ");
    scanf("%d", &escolha_atributo);

    printf("\n Resultado da Comparacao \n");

    if (escolha_atributo == 1) { // Populacao (maior vence)
        printf("Atributo Escolhido: Populacao\n");
        if (populacao1 > populacao2) {
            printf("Carta 1 vence com Populacao: %lu (Carta 2: %lu)\n", populacao1, populacao2);
        } else if (populacao2 > populacao1) {
            printf("Carta 2 vence com Populacao: %lu (Carta 1: %lu)\n", populacao2, populacao1);
        } else {
            printf("Empate! Populacao: %lu\n", populacao1);
        }
    } else if (escolha_atributo == 2) { // Area (maior vence)
        printf("Atributo Escolhido: Area\n");
        if (area_km2_1 > area_km2_2) {
            printf("Carta 1 vence com Area: %.2f (Carta 2: %.2f)\n", area_km2_1, area_km2_2);
        } else if (area_km2_2 > area_km2_1) {
            printf("Carta 2 vence com Area: %.2f (Carta 1: %.2f)\n", area_km2_2, area_km2_1);
        } else {
            printf("Empate! Area: %.2f\n", area_km2_1);
        }
    } else if (escolha_atributo == 3) { // PIB (maior vence)
        printf("Atributo Escolhido: PIB\n");
        if (pib1 > pib2) {
            printf("Carta 1 vence com PIB: %.2f (Carta 2: %.2f)\n", pib1, pib2);
        } else if (pib2 > pib1) {
            printf("Carta 2 vence com PIB: %.2f (Carta 1: %.2f)\n", pib2, pib1);
        } else {
            printf("Empate! PIB: %.2f\n", pib1);
        }
    } else if (escolha_atributo == 4) { // Numero de Pontos Turisticos (maior vence)
        printf("Atributo Escolhido: Numero de Pontos Turisticos\n");
        if (pontos_turisticos1 > pontos_turisticos2) {
            printf("Carta 1 vence com Pts Turisticos: %d (Carta 2: %d)\n", pontos_turisticos1, pontos_turisticos2);
        } else if (pontos_turisticos2 > pontos_turisticos1) {
            printf("Carta 2 vence com Pts Turisticos: %d (Carta 1: %d)\n", pontos_turisticos2, pontos_turisticos1);
        } else {
            printf("Empate! Pontos Turisticos: %d\n", pontos_turisticos1);
        }
    } else if (escolha_atributo == 5) { // Densidade Populacional (MENOR vence)
        printf("Atributo Escolhido: Densidade Populacional\n");
        if (densidade_populacional1 < densidade_populacional2) { // Menor valor vence
            printf("Carta 1 vence com Densidade Populacional: %.2f (Carta 2: %.2f)\n", densidade_populacional1, densidade_populacional2);
        } else if (densidade_populacional2 < densidade_populacional1) {
            printf("Carta 2 vence com Densidade Populacional: %.2f (Carta 1: %.2f)\n", densidade_populacional2, densidade_populacional1);
        } else {
            printf("Empate! Densidade Populacional: %.2f\n", densidade_populacional1);
        }
    } else if (escolha_atributo == 6) { // PIB per Capita (maior vence)
        printf("Atributo Escolhido: PIB per Capita\n");
        if (pib_per_capita1 > pib_per_capita2) {
            printf("Carta 1 vence com PIB per Capita: %.2f (Carta 2: %.2f)\n", pib_per_capita1, pib_per_capita2);
        } else if (pib_per_capita2 > pib_per_capita1) {
            printf("Carta 2 vence com PIB per Capita: %.2f (Carta 1: %.2f)\n", pib_per_capita2, pib_per_capita1);
        } else {
            printf("Empate! PIB per Capita: %.2f\n", pib_per_capita1);
        }
    } else if (escolha_atributo == 7) { // Super Poder (maior vence)
        printf("Atributo Escolhido: Super Poder\n");
        if (super_poder1 > super_poder2) {
            printf("Carta 1 vence com Super Poder: %.2f (Carta 2: %.2f)\n", super_poder1, super_poder2);
        } else if (super_poder2 > super_poder1) {
            printf("Carta 2 vence com Super Poder: %.2f (Carta 1: %.2f)\n", super_poder2, super_poder1);
        } else {
            printf("Empate! Super Poder: %.2f\n", super_poder1);
        }
    } else {
        printf("Escolha de atributo invalida. Por favor, digite um numero de 1 a 7.\n");
    }

    return 0;
}
