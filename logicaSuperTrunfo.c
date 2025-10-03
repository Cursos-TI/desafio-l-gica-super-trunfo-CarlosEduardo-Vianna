#include <stdio.h>
#include <string.h> // para usar strcspn ou strlen

int main() {
    char estado1[30], estado2[30];
    char cidade1[30], cidade2[30];
    char codigocarta1[4], codigocarta2[4];
    unsigned long int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2;
    float pib1, pib2;
    float area1, area2;
    float densidade1, densidade2;
    float pibper1, pibper2;
    float superpoder1, superpoder2;
  
    printf("*** Jogo Super Trunfo ***\n");
  
    // CARTA 1
    printf("\nInsira os dados da carta 1\n");

    printf("Digite o Estado: ");
    fgets(estado1, 30, stdin); // permite ler a linha inteira
    estado1[strcspn(estado1, "\n")] = 0; // remove o \n

    printf("Digite o Código da Carta (ex: RJ): ");
    fgets(codigocarta1, 4, stdin); 
    codigocarta1[strcspn(codigocarta1, "\n")] = 0;  // remove o \n

    printf("Digite o Nome da Cidade: ");
    fgets(cidade1, 30, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;

    printf("Digite a População da Cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a Área da Cidade (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%i", &pontosturisticos1);

    densidade1 = populacao1 / area1;
    pibper1 = (pib1 * 1000000000) / populacao1;
    superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + pibper1 + (1.0f / densidade1);

    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigocarta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %i\n", pontosturisticos1);
    printf("Densidade: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibper1);
    printf("Super Poder: %.2f\n", superpoder1);

    getchar(); // limpa o buffer antes da carta 2

    // CARTA 2
    printf("\nInsira os dados da carta 2\n");

    printf("Digite o Estado: ");
    fgets(estado2, 30, stdin);
    estado2[strcspn(estado2, "\n")] = 0;

    printf("Digite o Código da Carta (ex: SP): ");
    fgets(codigocarta2, 4, stdin);
    codigocarta2[strcspn(codigocarta2, "\n")] = 0;

    printf("Digite o Nome da Cidade: ");
    fgets(cidade2, 30, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Digite a População da Cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a Área da Cidade (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%i", &pontosturisticos2);

    densidade2 = populacao2 / area2;
    pibper2 = (pib2 * 1000000000) / populacao2; // Mantém o PIB em bilhões no input para ajustar o cálculo
    superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibper2 + (1.0f / densidade2);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %i\n", pontosturisticos2);
    printf("Densidade: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibper2);
    printf("Super Poder: %.2f\n", superpoder2);

    // COMPARAÇÕES
    printf("\n*** Comparação de Cartas ***\n");

    // População
    printf("\nAtributo: População\n");
    printf("Carta 1 (%s): %lu\n", cidade1, populacao1);
    printf("Carta 2 (%s): %lu\n", cidade2, populacao2);
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 venceu!\n");
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 venceu!\n");
    } else {
        printf("Resultado: Empate!\n");
    }

    // Área
    printf("\nAtributo: Área\n");
    printf("Carta 1 (%s): %.2f km²\n", cidade1, area1);
    printf("Carta 2 (%s): %.2f km²\n", cidade2, area2);
    if (area1 > area2) {
        printf("Resultado: Carta 1 venceu!\n");
    } else if (area2 > area1) {
        printf("Resultado: Carta 2 venceu!\n");
    } else {
        printf("Resultado: Empate!\n");
    }

    // PIB
    printf("\nAtributo: PIB\n");
    printf("Carta 1 (%s): %.2f bilhões\n", cidade1, pib1);
    printf("Carta 2 (%s): %.2f bilhões\n", cidade2, pib2);
    if (pib1 > pib2) {
        printf("Resultado: Carta 1 venceu!\n");
    } else if (pib2 > pib1) {
        printf("Resultado: Carta 2 venceu!\n");
    } else {
        printf("Resultado: Empate!\n");
    }

    // Pontos turísticos
    printf("\nAtributo: Pontos Turísticos\n");
    printf("Carta 1 (%s): %i\n", cidade1, pontosturisticos1);
    printf("Carta 2 (%s): %i\n", cidade2, pontosturisticos2);
    if (pontosturisticos1 > pontosturisticos2) {
        printf("Resultado: Carta 1 venceu!\n");
    } else if (pontosturisticos2 > pontosturisticos1) {
        printf("Resultado: Carta 2 venceu!\n");
    } else {
        printf("Resultado: Empate!\n");
    }

    // Densidade (menor vence)
    printf("\nAtributo: Densidade Populacional\n");
    printf("Carta 1 (%s): %.2f hab/km²\n", cidade1, densidade1);
    printf("Carta 2 (%s): %.2f hab/km²\n", cidade2, densidade2);
    if (densidade1 < densidade2) {
        printf("Resultado: Carta 1 venceu!\n");
    } else if (densidade2 < densidade1) {
        printf("Resultado: Carta 2 venceu!\n");
    } else {
        printf("Resultado: Empate!\n");
    }

    // PIB per capita
    printf("\nAtributo: PIB per Capita\n");
    printf("Carta 1 (%s): %.2f reais\n", cidade1, pibper1);
    printf("Carta 2 (%s): %.2f reais\n", cidade2, pibper2);
    if (pibper1 > pibper2) {
        printf("Resultado: Carta 1 venceu!\n");
    } else if (pibper2 > pibper1) {
        printf("Resultado: Carta 2 venceu!\n");
    } else {
        printf("Resultado: Empate!\n");
    }

    // Super poder
    printf("\nAtributo: Super Poder\n");
    printf("Carta 1 (%s): %.2f\n", cidade1, superpoder1);
    printf("Carta 2 (%s): %.2f\n", cidade2, superpoder2);
    if (superpoder1 > superpoder2) {
        printf("Resultado: Carta 1 venceu!\n");
    } else if (superpoder2 > superpoder1) {
        printf("Resultado: Carta 2 venceu!\n");
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
