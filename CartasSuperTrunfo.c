#include <stdio.h>

int main()
{
    // Definição das variáveis
    int codigo_da_cidade;
    int numero_de_pontos_turisticos;
    char nome_da_cidade[100];
    float populacao;
    float area_da_cidade;
    double pib; // Correto: double para PIB

    // Coletando informações
    printf("Código da Cidade:\n");
    scanf("%d", &codigo_da_cidade);

    printf("Nome da Cidade:\n");
    scanf(" %[^\n]", nome_da_cidade);

    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &numero_de_pontos_turisticos);

    printf("População:\n");
    scanf("%f", &populacao);

    printf("Área da Cidade:\n");
    scanf("%f", &area_da_cidade);

    printf("PIB (em bilhões):\n");
    scanf("%lf", &pib); // Correto: %lf para double

    // Mostrando os dados da cidade
    printf("\n===== Informações da Cidade =====\n");
    printf("Código da Cidade: %d\n", codigo_da_cidade);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos);
    printf("População: %.2f habitantes\n", populacao);
    printf("Área da Cidade: %.2f km²\n", area_da_cidade);
    printf("PIB: R$ %.2lf bilhões\n", pib); // Correto: %.2lf para double

    return 0;
}
