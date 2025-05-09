#include <stdio.h>

int main() {

    // ja no nivel novato,aventureiro e mestre!
    // Variáveis para a primeira cidade
    int codigo1;
    char nomecidade1[100];
    unsigned long int Populacao1;
    float Area1, PIB1;
    int pontosturisticos1;
    float densidade1, pibpercapita1, superpoder1;

    // Variáveis para a segunda cidade
    int codigo2;
    char nomecidade2[100];
    unsigned long int Populacao2;
    float Area2, PIB2;
    int pontosturisticos2;
    float densidade2, pibpercapita2, superpoder2;

    // Cadastro da primeira cidade
    printf("Digite o c\u00f3digo da primeira cidade:\n");
    scanf("%d", &codigo1);

    printf("Digite o nome da primeira cidade:\n");
    scanf("%s", nomecidade1);

    printf("Digite a popula\u00e7\u00e3o:\n");
    scanf("%lu", &Populacao1);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB1);

    printf("Digite a \u00e1rea:\n");
    scanf("%f", &Area1);

    printf("Digite os pontos tur\u00edsticos:\n");
    scanf("%d", &pontosturisticos1);

    // Cadastro da segunda cidade
    printf("\nDigite o c\u00f3digo da segunda cidade:\n");
    scanf("%d", &codigo2);

    printf("Digite o nome da segunda cidade:\n");
    scanf("%s", nomecidade2);

    printf("Digite a popula\u00e7\u00e3o:\n");
    scanf("%lu", &Populacao2);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB2);

    printf("Digite a \u00e1rea:\n");
    scanf("%f", &Area2);

    printf("Digite os pontos tur\u00edsticos:\n");
    scanf("%d", &pontosturisticos2);

   
    densidade1 = Populacao1 / Area1;
    pibpercapita1 = PIB1 / Populacao1;
    superpoder1 = Populacao1 + Area1 + PIB1 + pontosturisticos1 + pibpercapita1 + (1.0 / densidade1);

    densidade2 = Populacao2 / Area2;
    pibpercapita2 = PIB2 / Populacao2;
    superpoder2 = Populacao2 + Area2 + PIB2 + pontosturisticos2 + pibpercapita2 + (1.0 / densidade2);

    // dados da primeira cidade
    printf("\n--- Dados da Primeira Cidade ---\n");
    printf("C\u00f3digo: %d\n", codigo1);
    printf("Nome: %s\n", nomecidade1);
    printf("Popula\u00e7\u00e3o: %lu\n", Populacao1);
    printf("PIB: %.2f bilh\u00f5es\n", PIB1);
    printf("\u00c1rea: %.2f km\u00b2\n", Area1);
    printf("Pontos Tur\u00edsticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km\u00b2\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibpercapita1);

    // dados da segunda cidade
    printf("\n--- Dados da Segunda Cidade ---\n");
    printf("C\u00f3digo: %d\n", codigo2);
    printf("Nome: %s\n", nomecidade2);
    printf("Popula\u00e7\u00e3o: %lu\n", Populacao2);
    printf("PIB: %.2f bilh\u00f5es\n", PIB2);
    printf("\u00c1rea: %.2f km\u00b2\n", Area2);
    printf("Pontos Tur\u00edsticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km\u00b2\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibpercapita2);

    // Comparacoes
    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta 1 venceu (%d)\n", Populacao1 > Populacao2);
    printf("Area: Carta 1 venceu (%d)\n", Area1 > Area2);
    printf("PIB: Carta 1 venceu (%d)\n", PIB1 > PIB2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosturisticos1 > pontosturisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapita1 > pibpercapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

    return 0;
}
