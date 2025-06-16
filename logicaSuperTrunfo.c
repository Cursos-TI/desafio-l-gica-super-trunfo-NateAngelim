#include <stdio.h> 

int main() 
{
    char estado1;
    char codigo_carta1[10];
    char nome_cidade1[30];
    unsigned long int populacao1;
    float area_km2_1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1;

    char estado2;
    char codigo_carta2[10];
    char nome_cidade2[30];
    unsigned long int populacao2;
    float area_km2_2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    int escolha_atributo1;
    int escolha_atributo2; 

    float valor_atributo1_carta1, valor_atributo1_carta2;
    float valor_atributo2_carta1, valor_atributo2_carta2;

    float soma_atributos_carta1;
    float soma_atributos_carta2;

    char nome_atributo1[30];
    char nome_atributo2[30];

    printf(" Primeira Carta \n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (Ex: A01): ");
    scanf("%s", codigo_carta1);

    printf("Nome da Cidade : ");
    scanf("%s", nome_cidade1);

    printf("Populacao : ");
    scanf("%lu", &populacao1);

    printf("Area (em km2): ");
    scanf("%f", &area_km2_1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", & pontos_turisticos1);

    //  Calculos para a Primeira Carta 
    if (area_km2_1 > 0) {
        densidade_populacional1 = (float)populacao1 / area_km2_1;
    } else {
        densidade_populacional1 = 0.0f;
    }
    if (populacao1 > 0) {
        pib_per_capita1 = pib1 / (float)populacao1;
    } else {
        pib_per_capita1 = 0.0f;
    }
    float inverso_densidade1 = 0.0f;
    if (densidade_populacional1 > 0.0f) {
        inverso_densidade1 = 1.0f / densidade_populacional1;
    }
    super_poder1 = (float)populacao1 + area_km2_1 + pib1 + (float) pontos_turisticos1 + pib_per_capita1 + inverso_densidade1;


    printf("\n Segunda Carta \n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (Ex: A01): ");
    scanf("%s", codigo_carta2);

    printf("Nome da Cidade : ");
    scanf("%s", nome_cidade2);

    printf("Populacao : ");
    scanf("%lu", &populacao2);

    printf("Area (em km2): ");
    scanf("%f", &area_km2_2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", & pontos_turisticos2);

    //  Calculos para a Segunda Carta 
    if (area_km2_2 > 0) {
        densidade_populacional2 = (float)populacao2 / area_km2_2;
    } else {
        densidade_populacional2 = 0.0f;
    }
    if (populacao2 > 0) {
        pib_per_capita2 = pib2 / (float)populacao2;
    } else {
        pib_per_capita2 = 0.0f;
    }
    float inverso_densidade2 = 0.0f;
    if (densidade_populacional2 > 0.0f) {
        inverso_densidade2 = 1.0f / densidade_populacional2;
    }
    super_poder2 = (float)populacao2 + area_km2_2 + pib2 + (float) pontos_turisticos2 + pib_per_capita2 + inverso_densidade2;


    printf("\n Cartas Cadastradas \n");

    printf("\n Primeira Carta \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da Carta: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %lu habitantes\n", populacao1);
    printf("Area: %.2f km2\n", area_km2_1);
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
    printf("Area: %.2f km2\n", area_km2_2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    printf("\n Escolha o PRIMEIRO Atributo para Comparar \n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numero de Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("Digite o numero da sua escolha: ");
    scanf("%d", &escolha_atributo1);

    switch (escolha_atributo1) {
        case 1:
            valor_atributo1_carta1 = (float)populacao1;
            valor_atributo1_carta2 = (float)populacao2;
            sprintf(nome_atributo1, "Populacao");
            break;
        case 2:
            valor_atributo1_carta1 = area_km2_1;
            valor_atributo1_carta2 = area_km2_2;
            sprintf(nome_atributo1, "Area");
            break;
        case 3:
            valor_atributo1_carta1 = pib1;
            valor_atributo1_carta2 = pib2;
            sprintf(nome_atributo1, "PIB");
            break;
        case 4:
            valor_atributo1_carta1 = (float) pontos_turisticos1;
            valor_atributo1_carta2 = (float) pontos_turisticos2;
            sprintf(nome_atributo1, "Numero de Pontos Turisticos");
            break;
        case 5:
            valor_atributo1_carta1 = densidade_populacional1;
            valor_atributo1_carta2 = densidade_populacional2;
            sprintf(nome_atributo1, "Densidade Populacional");
            break;
        case 6:
            valor_atributo1_carta1 = pib_per_capita1;
            valor_atributo1_carta2 = pib_per_capita2;
            sprintf(nome_atributo1, "PIB per Capita");
            break;
        case 7:
            valor_atributo1_carta1 = super_poder1;
            valor_atributo1_carta2 = super_poder2;
            sprintf(nome_atributo1, "Super Poder");
            break;
        default:
            printf("Escolha de atributo invalida para o primeiro atributo. Saindo.\n");
            return 1; // Sai com erro
    }

    //  Escolha do Segundo Atributo (Menu Dinamico) 
    printf("\n Escolha o SEGUNDO Atributo para Comparar (diferente do primeiro)\n");
    // Usamos if-else para exibir o menu dinamicamente, excluindo a primeira escolha
    if (escolha_atributo1 != 1) printf("1. Populacao\n");
    if (escolha_atributo1 != 2) printf("2. Area\n");
    if (escolha_atributo1 != 3) printf("3. PIB\n");
    if (escolha_atributo1 != 4) printf("4. Numero de Pontos Turisticos\n");
    if (escolha_atributo1 != 5) printf("5. Densidade Populacional\n");
    if (escolha_atributo1 != 6) printf("6. PIB per Capita\n");
    if (escolha_atributo1 != 7) printf("7. Super Poder\n");

    printf("Digite o numero da sua escolha: ");
    scanf("%d", &escolha_atributo2);

    if (escolha_atributo2 == escolha_atributo1) {
        printf("Erro: O segundo atributo nao pode ser igual ao primeiro. Saindo.\n");
        return 1; // Sai com erro
    }

    // Atribuir valores e nome ao segundo atributo
    switch (escolha_atributo2) {
        case 1:
            valor_atributo2_carta1 = (float)populacao1;
            valor_atributo2_carta2 = (float)populacao2;
            sprintf(nome_atributo2, "Populacao");
            break;
        case 2:
            valor_atributo2_carta1 = area_km2_1;
            valor_atributo2_carta2 = area_km2_2;
            sprintf(nome_atributo2, "Area");
            break;
        case 3:
            valor_atributo2_carta1 = pib1;
            valor_atributo2_carta2 = pib2;
            sprintf(nome_atributo2, "PIB");
            break;
        case 4:
            valor_atributo2_carta1 = (float) pontos_turisticos1;
            valor_atributo2_carta2 = (float) pontos_turisticos2;
            sprintf(nome_atributo2, "Numero de Pontos Turisticos");
            break;
        case 5:
            valor_atributo2_carta1 = densidade_populacional1;
            valor_atributo2_carta2 = densidade_populacional2;
            sprintf(nome_atributo2, "Densidade Populacional");
            break;
        case 6:
            valor_atributo2_carta1 = pib_per_capita1;
            valor_atributo2_carta2 = pib_per_capita2;
            sprintf(nome_atributo2, "PIB per Capita");
            break;
        case 7:
            valor_atributo2_carta1 = super_poder1;
            valor_atributo2_carta2 = super_poder2;
            sprintf(nome_atributo2, "Super Poder");
            break;
        default:
            printf("Escolha de atributo invalida para o segundo atributo. Saindo.\n");
            return 1; // Sai com erro
    }

    printf("\n Resultados \n");
    printf("Comparando %s e %s\n", nome_atributo1, nome_atributo2);

    //  Comparacao Individual e Soma dos Atributos 
    // Atributo 1
    float pontuacao_attr1_carta1;
    float pontuacao_attr1_carta2;
    const char *resultado_attr1; // Ponteiro para string para indicar quem venceu

    // Regra: Densidade menor vence, outros maior vencem
    if (escolha_atributo1 == 5) { // Densidade Populacional (MENOR vence)
        pontuacao_attr1_carta1 = (densidade_populacional1 < densidade_populacional2) ? 1.0f : 0.0f;
        pontuacao_attr1_carta2 = (densidade_populacional2 < densidade_populacional1) ? 1.0f : 0.0f;
        resultado_attr1 = (densidade_populacional1 < densidade_populacional2) ? nome_cidade1 : ((densidade_populacional2 < densidade_populacional1) ? nome_cidade2 : "Empate");
    } else { // Maior valor vence para os demais
        pontuacao_attr1_carta1 = (valor_atributo1_carta1 > valor_atributo1_carta2) ? 1.0f : 0.0f;
        pontuacao_attr1_carta2 = (valor_atributo1_carta2 > valor_atributo1_carta1) ? 1.0f : 0.0f;
        resultado_attr1 = (valor_atributo1_carta1 > valor_atributo1_carta2) ? nome_cidade1 : ((valor_atributo1_carta2 > valor_atributo1_carta1) ? nome_cidade2 : "Empate");
    }

    // Atributo 2
    float pontuacao_attr2_carta1;
    float pontuacao_attr2_carta2;
    const char *resultado_attr2;

    if (escolha_atributo2 == 5) { // Densidade Populacional (MENOR vence)
        pontuacao_attr2_carta1 = (densidade_populacional1 < densidade_populacional2) ? 1.0f : 0.0f;
        pontuacao_attr2_carta2 = (densidade_populacional2 < densidade_populacional1) ? 1.0f : 0.0f;
        resultado_attr2 = (densidade_populacional1 < densidade_populacional2) ? nome_cidade1 : ((densidade_populacional2 < densidade_populacional1) ? nome_cidade2 : "Empate");
    } else { // Maior valor vence para os demais
        pontuacao_attr2_carta1 = (valor_atributo2_carta1 > valor_atributo2_carta2) ? 1.0f : 0.0f;
        pontuacao_attr2_carta2 = (valor_atributo2_carta2 > valor_atributo2_carta1) ? 1.0f : 0.0f;
        resultado_attr2 = (valor_atributo2_carta1 > valor_atributo2_carta2) ? nome_cidade1 : ((valor_atributo2_carta2 > valor_atributo2_carta1) ? nome_cidade2 : "Empate");
    }
    
    // Soma das pontuacoes dos atributos (para determinar o vencedor da rodada)
    soma_atributos_carta1 = pontuacao_attr1_carta1 + pontuacao_attr2_carta1;
    soma_atributos_carta2 = pontuacao_attr1_carta2 + pontuacao_attr2_carta2;


    //  Exibicao do resultado
    printf("\n Detalhes da Rodada \n");
    printf("Carta 1 (%s):\n", nome_cidade1);
    printf("  %s: %.2f\n", nome_atributo1, valor_atributo1_carta1);
    printf("  %s: %.2f\n", nome_atributo2, valor_atributo2_carta1);
    printf("  Soma dos Atributos: %.2f\n", soma_atributos_carta1);

    printf("\nCarta 2 (%s):\n", nome_cidade2);
    printf("  %s: %.2f\n", nome_atributo1, valor_atributo1_carta2);
    printf("  %s: %.2f\n", nome_atributo2, valor_atributo2_carta2);
    printf("  Soma dos Atributos: %.2f\n", soma_atributos_carta2);

    printf("\n Vencedor da Rodada \n");
    if (soma_atributos_carta1 > soma_atributos_carta2) {
        printf("%s vence a rodada!\n", nome_cidade1);
    } else if (soma_atributos_carta2 > soma_atributos_carta1) {
        printf("%s vence a rodada!\n", nome_cidade2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
