#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis para a Carta 1
    char estado1;
    char codigo1[5];       // Ex: A01 -> 3 caracteres + '\0'
    char nome_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Variáveis para a Carta 2
    char estado2;
    char codigo2[5];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Solicitação dos dados da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite uma letra de A a H para o Estado: ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]s", nome_cidade1); // Lê até encontrar '\n'

    printf("Digite a Populacao da Cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a Area da Cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Linha em branco para separação visual
    printf("\n");

    // Solicitação dos dados da Carta 2
    printf("=== Cadastro da Carta 2 ===\n");
    printf("Digite uma letra de A a H para o Estado: ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]s", nome_cidade2);

    printf("Digite a Populacao da Cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a Area da Cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Linha em branco
    printf("\n");

    // Exibição das informações da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);

    // Linha em branco
    printf("\n");

    // Exibição das informações da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);

    return 0;
}