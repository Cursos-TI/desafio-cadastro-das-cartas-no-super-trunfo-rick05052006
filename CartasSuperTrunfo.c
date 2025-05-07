#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    int codigo;
    char nomecidade[100];
    int Populacao;
    float Area;
    float PIB;
    int pontosturisticos;
    printf("digite o codigo da cidade: \n ");
    scanf("%d", &codigo);

    printf("digite o nome da cidade: \n ");
    scanf("%s", &nomecidade);

    printf("digite a Populacao: \n ");
    scanf("%d", &Populacao);

    printf("digite o PIB: \n ");
    scanf("%f", &PIB);

    printf("digite a area: \n ");
    scanf("%f", &Area);

    printf("digite os pontosturisticos: \n ");
    scanf("%d", &pontosturisticos);



    printf("\n--- Dados da Carta da Cidade ---\n");
    printf("Código: %d\n", codigo);
    printf("Nome: %s\n", nomecidade);
    printf("População: %d\n", Populacao);
    printf("PIB: %f bilhões\n", PIB);
    printf("Área: %f km \n", Area);
    printf("Pontos Turísticos: %d\n", pontosturisticos);



    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
