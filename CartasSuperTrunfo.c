#include <stdio.h>

int main() {
    // Dados da carta 1
    char estado1;
    char codigodacarta1[4];
    char cidade1[50];
    int numerocarta1;
    int populacao1;
    float area1;
    int npontosturisticos1;
    float PIB1;

    // Dados da carta 2
    char estado2;
    char codigodacarta2[4];
    char cidade2[50];
    int numerocarta2;
    int populacao2;
    float area2;
    int npontosturisticos2;
    float PIB2;

    // ----- Carta 1 -----
    printf("=== Preencha os dados da primeira carta ===\n");
    printf("Digite o Estado (A a H): ");
    scanf(" %c", &estado1);
    printf("Digite o número da carta (1 a 4): ");
    scanf("%d", &numerocarta1);
    printf("Digite a cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a Área total: ");
    scanf("%f", &area1);
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &npontosturisticos1);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB1);

    // Monta o código da carta 1: letra do estado + número com 2 dígitos
    sprintf(codigodacarta1, "%c%02d", estado1, numerocarta1);

    // ----- Carta 2 -----
    printf("\n=== Preencha os dados da segunda carta ===\n");
    printf("Digite o Estado (A a H): ");
    scanf(" %c", &estado2);
    printf("Digite a cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a Área total: ");
    scanf("%f", &area2);
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &npontosturisticos2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);

    // Calcula o número da carta 2: sempre diferente do número da carta 1, dentro de 1 a 4
    numerocarta2 = (numerocarta1 % 4) + 1;

    // Monta o código da carta 2: letra do estado + número com 2 dígitos
    sprintf(codigodacarta2, "%c%02d", estado2, numerocarta2);

    // ----- Exibição dos dados -----
    printf("\n========== CARTA 1 ==========\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigodacarta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área total: %.2f km²\n", area1);
    printf("Pontos turísticos: %d\n", npontosturisticos1);
    printf("PIB: %.2f Bilhões de reais\n", PIB1);

    printf("\n========== CARTA 2 ==========\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigodacarta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área total: %.2f km²\n", area2);
    printf("Pontos turísticos: %d\n", npontosturisticos2);
    printf("PIB: %.2f Bilhões de reais\n", PIB2);

    return 0;
}