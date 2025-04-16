#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char estado[30], codigo[3], cidade[50];
    int populacao, pontosTuristicos;
    float area, pib;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //Obter informações da carta 1
    printf("Por favor, digitar as informações da Carta 1: \n\n");

    printf("Digite o Estado: \n");
    scanf("%s",&estado);

    printf("Digite o código da carta: \n");
    scanf("%s",&codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s" ,&cidade);

    printf("Digite a população: \n");
    scanf("%d",&populacao);

    printf("Digite a área: \n");
    scanf("%f",&area);

    printf("Digite o PIB: \n");
    scanf("%f",&pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d",&pontosTuristicos);
    printf("\n");
 
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

//Exibir informações da carta 1
    printf("=================================================\n");
    printf("==========           Carta 1           ==========\n");
    printf("=================================================\n\n");
    printf("Estado: %s \n",estado);
    printf("Código: %s \n",codigo);
    printf("Nome da Cidade: %s \n",cidade);
    printf("População: %d \n",populacao);
    printf("Área: %f \n",area);
    printf("PIB: %f \n",pib);
    printf("Número de Pontos Turísticos: %d \n\n",pontosTuristicos);
    printf("=================================================\n\n");

//Obter informações da carta 2
    printf("Por favor digitar as informações da Carta 2: \n\n");

    printf("Digite o Estado: \n");
    scanf("%s",&estado);

    printf("Digite o código da carta: \n");
    scanf("%s",&codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s" ,&cidade);

    printf("Digite a população: \n");
    scanf("%d",&populacao);

    printf("Digite a área: \n");
    scanf("%f",&area);

    printf("Digite o PIB: \n");
    scanf("%f",&pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d",&pontosTuristicos);
    printf("\n");

//Exibir informações da carta 2
    printf("=================================================\n");
    printf("==========           Carta 2           ==========\n");
    printf("=================================================\n\n");
    printf("Estado: %s \n",estado);
    printf("Código: %s \n",codigo);
    printf("Nome da Cidade: %s \n",cidade);
    printf("População: %d \n",populacao);
    printf("Área: %f \n",area);
    printf("PIB: %f \n",pib);
    printf("Número de Pontos Turísticos: %d \n\n",pontosTuristicos);
    printf("=================================================\n");

    return 0;
}
