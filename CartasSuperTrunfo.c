#include <stdio.h>

int main(){

    char estado, estado2;
    char nome[20], codigo[20], nome2[20], codigo2[20];
    int turismo, turismo2;
    unsigned long int populacao, populacao2;
    float area, pib, area2, pib2;

    printf("\nDigite as informações da carta 1\n");
    printf("Digite uma letra de 'A' a 'h': ");
    scanf(" %c",&estado);

    printf("Digite a letra do estado seguido de um digito: ");
    scanf(" %s",codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %s",nome);

    printf("Digite a população da cidade: ");
    scanf(" %lu",&populacao);

    printf("Digite a área da cidade(em km²): ");
    scanf(" %f",&area);

    printf("Digite o PIB(Produto Interno Bruto) da ciadade: ");
    scanf(" %f",&pib);

    printf("Digite o numero de pontos turísticos na cidade: ");
    scanf(" %i",&turismo);


    printf("\nDigite as informações da carta 2\n");
    printf("Digite uma letra de 'A' a 'h': ");
    scanf(" %c",&estado2);

    printf("Digite a letra do estado seguido de um digito: ");
    scanf(" %s",codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %s",nome2);

    printf("Digite a população da cidade: ");
    scanf(" %lu",&populacao2);

    printf("Digite a área da cidade(em km²): ");
    scanf(" %f",&area2);

    printf("Digite o PIB(Produto Interno Bruto) da ciadade: ");
    scanf(" %f",&pib2);

    printf("Digite o numero de pontos turísticos na cidade: ");
    scanf(" %i",&turismo2);

    float densidade = (float) populacao / area;
    float densidade2 = (float) populacao2 / area2;

    float pib_per_capita =  pib / (float) populacao;
    float pib_per_capita2 =  pib2 / (float) populacao2;
   
    printf("\nCarta 1:\n");
    printf("Estado: %c\n",estado);
    printf("Codigo: %s\n",codigo);
    printf("Nome da cidade: %s\n",nome);
    printf("População: %lu\n",populacao);
    printf("Área: %.2f\n",area);
    printf("PIB: %.2f\n",pib);
    printf("Numero de pontos turísticos: %i\n",turismo);
    printf("Densidade Populacional: %.2f\n",densidade);
    printf("PIB per Capita: %.2f\n",pib_per_capita);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n",estado2);
    printf("Codigo: %s\n",codigo2);
    printf("Nome da cidade: %s\n",nome2);
    printf("População: %lu\n",populacao2);
    printf("Área: %.2f\n",area2);
    printf("PIB: %.2f\n",pib2);
    printf("Numero de pontos turísticos: %i\n",turismo2);
    printf("Densidade Populacional: %.2f\n",densidade2);
    printf("PIB per Capita: %.2f\n",pib_per_capita2);

    float inverso_densidade = 1.0 / densidade;
    float inverso_densidade2 = 1.0 / densidade2;

    float super_poder = (float)populacao + area + pib + (float)turismo + pib_per_capita + inverso_densidade;
    float super_poder2 = (float)populacao2 + area2 + pib2 + (float)turismo2 + pib_per_capita2 + inverso_densidade2;

    int atributo1, atributo2, resultado1, resultado2;

printf("\nEscolha o primeiro atributo para a comparação:\n");
printf("1 - População\n");
printf("2 - Área\n");
printf("3 - PIB\n");
printf("4 - Número de pontos turísticos\n");
printf("5 - Densidade Populacional\n");
printf("6 - PIB per Capita\n");
printf("7 - Super Poder\n");
scanf("%d", &atributo1);

/* PRIMEIRO ATRIBUTO */
switch (atributo1) {

    case 1:
        printf("\nVocê escolheu o atributo: População\n");
        resultado1 = populacao > populacao2 ? 1 : 0;
        break;

    case 2:
        printf("\nVocê escolheu o atributo: Área\n");
        resultado1 = area > area2 ? 1 : 0;
        break;

    case 3:
        printf("\nVocê escolheu o atributo: PIB\n");
        resultado1 = pib > pib2 ? 1 : 0;
        break;

    case 4:
        printf("\nVocê escolheu o atributo: Pontos Turísticos\n");
        resultado1 = turismo > turismo2 ? 1 : 0;
        break;

    case 5:
        printf("\nVocê escolheu o atributo: Densidade Populacional\n");
        resultado1 = inverso_densidade > inverso_densidade2 ? 1 : 0;
        break;

    case 6:
        printf("\nVocê escolheu o atributo: PIB per Capita\n");
        resultado1 = pib_per_capita > pib_per_capita2 ? 1 : 0;
        break;

    case 7:
        printf("\nVocê escolheu o atributo: Super Poder\n");
        resultado1 = super_poder > super_poder2 ? 1 : 0;
        break;

    default:
        printf("Opção inválida. Tente novamente.\n");
        return 0;
}


/* SEGUNDO ATRIBUTO */
printf("\nEscolha o segundo atributo para a comparação:\n");
printf("!!! ATENÇÃO: não pode ser o mesmo que o anterior !!!\n");
printf("1 - População\n");
printf("2 - Área\n");
printf("3 - PIB\n");
printf("4 - Número de pontos turísticos\n");
printf("5 - Densidade Populacional\n");
printf("6 - PIB per Capita\n");
printf("7 - Super Poder\n");
scanf("%d", &atributo2);

if (atributo1 == atributo2) {
    printf("Você escolheu o mesmo atributo duas vezes!\n");
    return 0;
}

switch (atributo2) {

    case 1:
        printf("\nVocê escolheu o atributo: População\n");
        resultado2 = populacao > populacao2 ? 1 : 0;
        break;

    case 2:
        printf("\nVocê escolheu o atributo: Área\n");
        resultado2 = area > area2 ? 1 : 0;
        break;

    case 3:
        printf("\nVocê escolheu o atributo: PIB\n");
        resultado2 = pib > pib2 ? 1 : 0;
        break;

    case 4:
        printf("\nVocê escolheu o atributo: Pontos Turísticos\n");
        resultado2 = turismo > turismo2 ? 1 : 0;
        break;

    case 5:
        printf("\nVocê escolheu o atributo: Densidade Populacional\n");
        resultado2 = inverso_densidade > inverso_densidade2 ? 1 : 0;
        break;

    case 6:
        printf("\nVocê escolheu o atributo: PIB per Capita\n");
        resultado2 = pib_per_capita > pib_per_capita2 ? 1 : 0;
        break;

    case 7:
        printf("\nVocê escolheu o atributo: Super Poder\n");
        resultado2 = super_poder > super_poder2 ? 1 : 0;
        break;

    default:
        printf("Opção inválida. Tente novamente.\n");
        return 0;
}


/* RESULTADO FINAL */
printf("\n===== RESULTADO FINAL =====\n");

printf("Resultado do 1º atributo: %s\n", resultado1 ? "Carta 1 venceu" : "Carta 2 venceu");
printf("Resultado do 2º atributo: %s\n", resultado2 ? "Carta 1 venceu" : "Carta 2 venceu");

if (resultado1 == 1 && resultado2 == 1) {
    printf("\n Carta 1 - %s venceu a rodada!\n", nome);
} else if (resultado1 == 0 && resultado2 == 0) {
    printf("\n Carta 2 - %s venceu a rodada!\n", nome2);
} else {
    printf("\n Empate! Cada carta venceu um atributo.\n");
}

return 0;

}