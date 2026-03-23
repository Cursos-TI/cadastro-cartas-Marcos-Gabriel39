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
    scanf(" %s",&codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %s",&nome);

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
    scanf(" %s",&codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %s",&nome2);

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

    printf("\nComparação:\n");
    printf("População: %lua\n",populacao > populacao2);
    printf("Área: %d\n",area > area2);
    printf("PIB: %d\n",pib >pib2);
    printf("Numero de pontos turísticos: %i\n",turismo > turismo2);
    printf("Densidade Populacional: %d\n",densidade > densidade2);
    printf("PIB per Capita: %d\n",pib_per_capita > pib_per_capita2);
    printf("Super poder: %d\n",super_poder > super_poder2);

    return 0;

}