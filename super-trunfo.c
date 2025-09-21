#include <stdio.h>

int main()
{
    char estado1;
    char codigoCarta1[4];
    char nomeCidade1[50];
    int pontosTuristicos1;
    int populacao1;
    float area1;
    float pib1;
    float densidadePop1;
    float PIBPerCapita1;

    char estado2;
    char codigoCarta2[4];
    char nomeCidade2[50];
    int pontosTuristicos2;
    int populacao2;
    float area2;
    float pib2;
    float densidadePop2;
    float PIBPerCapita2;

    // cadastro da carta 1
    printf("Cadastre a carta 1\n");
    printf("Digite a primeira letra do estado da carta 1: \n");
    scanf(" %c", &estado1);

    printf("Digite a inicial do estado seguida de um número de 01 a 04: \n");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade1);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos na cidade: \n");
    scanf("%d", &pontosTuristicos1);

    densidadePop1 = (float)populacao1 / area1;
    PIBPerCapita1 = pib1 / (float)populacao1;

    // cadastro da carta2
    
    printf("\n");
    printf("Cadastre a carta 2\n");
    printf("Digite a primeira letra do estado da carta 2: \n");
    scanf(" %c", &estado2);

    printf("Digite a inicial do estado seguida de um número de 01 a 04: \n");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade2);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontosTuristicos2);

    densidadePop2 = (float)populacao2 / area2;
    PIBPerCapita2 = pib2 / (float)populacao2;

    
    // exibição da carta 1
    printf("\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Números de pontos túristicos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidadePop1);
    printf("PIB per capita: %.2f\n", PIBPerCapita1);
    
    // exibição da carta 2
    printf("\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Números de pontos túristicos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidadePop2);
    printf("PIB per capita: %.2f\n", PIBPerCapita2);

    //Comparações e calculo de atributo
    printf("\n");
    printf("Comparação de cartas (atributo: população)\n");
    printf("Carta 1 - %s: %d\n", nomeCidade1, populacao1);
    printf("Carta 2 - %s: %d\n", nomeCidade2, populacao2);
    if(populacao1 > populacao2){
        printf("Resultado: Carta 1 (%s) venceu.\n", nomeCidade1);
    }else{
        printf("Resultado: Carta 2 (%s) venceu.\n", nomeCidade2);
    }
    return 0;
    
}
