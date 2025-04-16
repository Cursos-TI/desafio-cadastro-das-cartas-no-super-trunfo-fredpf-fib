#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char estadoCarta1[30], codigoCarta1[3], cidadeCarta1[50];
    char estadoCarta2[30], codigoCarta2[3], cidadeCarta2[50];
    int populacaoCarta1, pontosTuristicosCarta1;
    int populacaoCarta2, pontosTuristicosCarta2;
    float areaCarta1, pibCarta1;
    float areaCarta2, pibCarta2;
    float densidadePopuCarta1, pibCapitaCarta1;
    float densidadePopuCarta2, pibCapitaCarta2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //Obter informações da carta 1
    printf("Por favor, digitar as informações da Carta 1: \n\n");

    printf("Digite o Estado: \n");
    scanf("%s",&estadoCarta1);

    printf("Digite o código da carta: \n");
    scanf("%s",&codigoCarta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s" ,&cidadeCarta1);

    printf("Digite a população: \n");
    scanf("%d",&populacaoCarta1);

    printf("Digite a área: \n");
    scanf("%f",&areaCarta1);

    printf("Digite o PIB: \n");
    scanf("%f",&pibCarta1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d",&pontosTuristicosCarta1);
    printf("\n");

//Obter informações da carta 2
    printf("Por favor digitar as informações da Carta 2: \n\n");

    printf("Digite o Estado: \n");
    scanf("%s",&estadoCarta2);

    printf("Digite o código da carta: \n");
    scanf("%s",&codigoCarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s" ,&cidadeCarta2);

    printf("Digite a população: \n");
    scanf("%d",&populacaoCarta2);

    printf("Digite a área: \n");
    scanf("%f",&areaCarta2);

    printf("Digite o PIB: \n");
    scanf("%f",&pibCarta2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d",&pontosTuristicosCarta2);
    printf("\n");

    densidadePopuCarta1 = populacaoCarta1/areaCarta1;
    pibCapitaCarta1 = pibCarta1/populacaoCarta1;

    densidadePopuCarta2 = populacaoCarta2/areaCarta2;
    pibCapitaCarta2 = pibCarta2/populacaoCarta2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

//Exibir informações da carta 1

    printf("=================================================\n");
    printf("==========           Carta 1           ==========\n");
    printf("=================================================\n\n");
    printf("Estado: %s \n",estadoCarta1);
    printf("Código: %s \n",codigoCarta1);
    printf("Nome da Cidade: %s \n",cidadeCarta1);
    printf("População: %d \n",populacaoCarta1);
    printf("Área: %f \n",areaCarta1);
    printf("PIB: %f \n",pibCarta1);
    printf("Número de Pontos Turísticos: %d \n",pontosTuristicosCarta1);
    printf("Densidade Populacional: %.2f \n",densidadePopuCarta1);
    printf("PIB per Capita: %.2f \n\n",pibCapitaCarta1);
    printf("=================================================\n\n");


//Exibir informações da carta 2
    printf("=================================================\n");
    printf("==========           Carta 2           ==========\n");
    printf("=================================================\n\n");
    printf("Estado: %s \n",estadoCarta2);
    printf("Código: %s \n",codigoCarta2);
    printf("Nome da Cidade: %s \n",cidadeCarta2);
    printf("População: %d \n",populacaoCarta2);
    printf("Área: %f \n",areaCarta2);
    printf("PIB: %f \n",pibCarta2);
    printf("Número de Pontos Turísticos: %d \n",pontosTuristicosCarta2);
    printf("Densidade Populacional: %.2f \n",densidadePopuCarta2);
    printf("PIB per Capita: %.2f \n\n",pibCapitaCarta2);
    printf("=================================================\n");

    return 0;
}
