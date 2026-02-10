#include <stdio.h>

int main() {

     setbuf(stdout, NULL);

    // ===== CARTA 1 =====
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    printf("\n--- CARTA 1 ---\n");

    printf("Insira o estado da sua carta: \n");
    scanf(" %c", &estado1);

    printf("Insira o código da sua carta: \n");
    scanf("%s", codigo1);

     getchar(); 

    printf("Insira o nome da cidade da sua carta: \n");
    fgets(cidade1, 50, stdin);

    printf("Quanto é a população da cidade da sua carta?: \n");
    scanf("%d", &populacao1);

    printf("Insira a área da cidade da sua carta em km²: \n");
    scanf("%f", &area1);

    printf("Insira o PIB da cidade de sua carta: \n");
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos tem na cidade de sua carta?: \n");
    scanf("%d", &pontos1);

    printf(
        "\nCarta 1:\n\n"
        "Estado: %c\n"
        "Código: %s\n"
        "Nome da Cidade: %s"
        "População: %d\n"
        "Área: %.2f km²\n"
        "PIB: %.2f\n"
        "Número de Pontos Turísticos: %d\n",
        estado1, codigo1, cidade1, populacao1, area1, pib1, pontos1
    );

    // ===== CARTA 2 =====
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    printf("\n--- CARTA 2 ---\n");

    printf("Insira o estado da sua carta: \n");
    scanf(" %c", &estado2);

    printf("Insira o código da sua carta: \n");
    scanf("%s", codigo2);

     getchar(); 

    printf("Insira o nome da cidade da sua carta: \n");
    fgets(cidade2, 50, stdin);

    printf("Quanto é a população da cidade da sua carta?: \n");
    scanf("%d", &populacao2);

    printf("Insira a área da cidade da sua carta em km²: \n");
    scanf("%f", &area2);

    printf("Insira o PIB da cidade de sua carta: \n");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos tem na cidade de sua carta?: \n");
    scanf("%d", &pontos2);

    printf(
        "\nCarta 2:\n\n"
        "Estado: %c\n"
        "Código: %s\n"
        "Nome da Cidade: %s"
        "População: %d\n"
        "Área: %.2f km²\n"
        "PIB: %.2f\n"
        "Número de Pontos Turísticos: %d\n",
        estado2, codigo2, cidade2, populacao2, area2, pib2, pontos2
    );

    return 0;
}

