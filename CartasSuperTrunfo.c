#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*Desafio Super Trunfo - Países - Cadastro das Cartas
    Nível Novato: Cadastro Básico - OK
    Nível Aventureiro: Cálculo de Atributos - OK
    Nível Mestre: Comparação e Super Poder - OK
*/

int main () {
    setlocale(LC_ALL, ".UTF-8");

    char estado;
    char codigoDaCarta[4];
    char nomeDaCidade[50];
    int numeroDePontosTuristicos;
    unsigned long int populacao;
    float areaEmKM, PIB, densidadePopulacional, PIBPerCapita;
    float superPoder;

    char estado2;
    char codigoDaCarta2[4];
    char nomeDaCidade2[50];
    int numeroDePontosTuristicos2;
    unsigned long int populacao2;
    float areaEmKM2, PIB2, densidadePopulacional2, PIBPerCapita2;
    float superPoder2;

    //Solicitando os dados da Carta 1
    printf("Digite o estado da carta: ");
    scanf("%c", &estado);

    printf("Digite o código da carta: ");
    scanf("%s", codigoDaCarta);

    //limpar o buffer
    while (getchar() != '\n');
    printf("Digite o nome da cidade: ");
    fgets(nomeDaCidade, 50, stdin);

    nomeDaCidade[strcspn(nomeDaCidade, "\n")] = '\0';

    printf("Digite a quantidade da população da cidade: ");
    scanf("%lu", &populacao);

    printf("Digite a área da cidade: ");
    scanf("%f", &areaEmKM);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turísticos da cidade: ");
    scanf("%i", &numeroDePontosTuristicos);

    //Solicitando os dados da carta 2
    while (getchar() != '\n');
    printf("Digite o estado da carta: ");
    scanf("%c", &estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigoDaCarta2);

    //limpar o buffer
    while (getchar() != '\n');
    printf("Digite o nome da cidade: ");
    fgets(nomeDaCidade2, 50, stdin);

    nomeDaCidade2[strcspn(nomeDaCidade2, "\n")] = '\0';

    printf("Digite a quantidade da população da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f", &areaEmKM2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turísticos da cidade: ");
    scanf("%i", &numeroDePontosTuristicos2);

    //calculando a Densidade Populacional das duas cartas
    densidadePopulacional = (float) populacao / areaEmKM;
    densidadePopulacional2 = (float) populacao2 / areaEmKM2;

    //Calculando o PIB per capita das duas cartas
    PIBPerCapita = PIB / (float) populacao;
    PIBPerCapita2 = PIB2 / (float) populacao2;

    //Calculando o super poder das cartas
    superPoder = populacao + areaEmKM + PIB + numeroDePontosTuristicos + PIBPerCapita + (1/densidadePopulacional);
    superPoder2 = populacao2 + areaEmKM2 + PIB2 + numeroDePontosTuristicos2 + PIBPerCapita2 + (1/densidadePopulacional2);

    //Imprimindo a carta 1
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigoDaCarta);
    printf("Nome Da Cidade: %s\n", nomeDaCidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", areaEmKM);
    printf("PIB: %.2f bilhões de reias\n", PIB);
    printf("Numero de Pontos Turísticos: %i\n", numeroDePontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n\n", PIBPerCapita);

    //Imprimindo a carta 2
    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoDaCarta2);
    printf("Nome Da Cidade: %s\n", nomeDaCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", areaEmKM2);
    printf("PIB: %.2f bilhões de reias\n", PIB2);
    printf("Numero de Pontos Turísticos: %i\n", numeroDePontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", PIBPerCapita2);

    //Comparação das duas Cartas
    printf("\nComparação de Cartas: \n");
    printf("1 = Carta 1 vence\n2 = Carta 2 vence\n\n");
    printf("População: %i\n", populacao > populacao2);
    printf("Área: %i\n", areaEmKM > areaEmKM2);
    printf("PIB: %i\n", PIB > PIB2);
    printf("Pontos Turísticos: %i\n", numeroDePontosTuristicos > numeroDePontosTuristicos2);
    //Quanto menor a Densidade Populacional melhor
    printf("Densidade Populacional: %i\n", !(densidadePopulacional > densidadePopulacional2));
    printf("PIB per Capita: %i\n", PIBPerCapita > PIBPerCapita2);
    printf("Super Poder: %i\n", superPoder > superPoder2);

return 0;
}
