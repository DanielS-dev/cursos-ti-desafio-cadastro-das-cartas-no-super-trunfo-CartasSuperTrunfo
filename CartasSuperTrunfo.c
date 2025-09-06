#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*Desafio Super Trunfo - Países - Cadastro das Cartas
    Nível Novato: Cadastro Básico - OK
    Nível Aventureiro: Cálculo de Atributos - Pendente
    Nível Mestre: Comparação e Super Poder - Pendente
*/

int main () {
    setlocale(LC_ALL, ".UTF-8");

    char estado;
    char codigoDaCarta[4];
    char nomeDaCidade[50];
    int populacao, numeroDePontosTuristicos;
    float areaEmKM, PIB;

    char estado2;
    char codigoDaCarta2[4];
    char nomeDaCidade2[50];
    int populacao2, numeroDePontosTuristicos2;
    float areaEmKM2, PIB2;

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
    scanf("%i", &populacao);

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
    scanf("%i", &populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f", &areaEmKM2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turísticos da cidade: ");
    scanf("%i", &numeroDePontosTuristicos2);

    //Imprimindo a carta 1
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigoDaCarta);
    printf("Nome Da Cidade: %s\n", nomeDaCidade);
    printf("População: %i\n", populacao);
    printf("Área: %.2f km²\n", areaEmKM);
    printf("PIB: %.2f bilhões de reias\n", PIB);
    printf("Numero de Pontos Turísticos: %i\n\n", numeroDePontosTuristicos);

    //Imprimindo a carta 2
    printf("Carta 2: \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigoDaCarta);
    printf("Nome Da Cidade: %s\n", nomeDaCidade);
    printf("População: %i\n", populacao);
    printf("Área: %.2f km²\n", areaEmKM);
    printf("PIB: %.2f bilhões de reias\n", PIB);
    printf("Numero de Pontos Turísticos: %i", numeroDePontosTuristicos);

return 0;
}
