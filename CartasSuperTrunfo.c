#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

            // Declaração das variáveis da carta 1.

    char codigo_cidade_carta_1[4];       // variável para armazenar o código da carta, do tipo array com 3 posicões.
    char nome_cidade_carta_1[50];        // variável para armazenar o nome da cidade, do tipo array com 50 posicões.
    int populacao_carta_1;               // variável para armazenar a quantidade de população da cidade.
    float area_km_carta_1;               // variável para armazenar a aréa da cidade em Km2.
    float pib_carta_1;                   // variável para armazenar o PIB(produto interno bruto),da cidade.
    int qtde_pontos_turisticos_carta_1;  // variável para armazenar a quantidade de pontos túristicos na cidade.
    float densidade_populacional_carta_1;// variável para armazenar a densidade populacional da cidade.
    float pib_per_capita_carta_1;        // variável para armazenar o pib-per-capita da cidade.


            // Declaração das variáveis da carta 2.

    char codigo_cidade_carta_2[4];       // variável para armazenar o código da carta, do tipo array com 3 posicões.
    char nome_cidade_carta_2[50];        // variável para armazenar o nome da cidade, do tipo array com 50 posicões.
    int populacao_carta_2;               // variável para armazenar a quantidade de população da cidade.
    float area_km_carta_2;               // variável para armazenar a aréa da cidade em Km2.
    float pib_carta_2;                   // variável para armazenar o PIB(produto interno bruto),da cidade.
    int qtde_pontos_turisticos_carta_2;  // variável para armazenar a quantidade de pontos túristicos na cidade.
    float densidade_populacional_carta_2;// variável para armazenar a densidade populacional da cidade.
    float pib_per_capita_carta_2;        // variável para armazenar o pib-per-capita da cidade.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.


            // Coleta de dados da carta 1.
    

    printf("Olá, seja bem vindo!\nDigite o código da cidade para cadastrar.\n");
    scanf("%s", codigo_cidade_carta_1);

    printf("Agora Digite o nome da cidade.\n");
    scanf("%s", nome_cidade_carta_1);

    printf("Digite a população da cidade.\n");
    scanf("%d",&populacao_carta_1);

    printf("Digite a aréa total da cidade.\n");
    scanf("%f", &area_km_carta_1);

    printf("Digite o PIB da cidade.\n");
    scanf("%f", &pib_carta_1);

    printf("Digite a quantidade de pontos turístico da cidade.\n");
    scanf("%d", &qtde_pontos_turisticos_carta_1);

    densidade_populacional_carta_1 = (float)populacao_carta_1 / area_km_carta_1; // calcula a densidade populacional da cidade
    pib_per_capita_carta_1 = (pib_carta_1 * 100000000) / (float)populacao_carta_1;             // calcula o PIB per Capita da cidade.
    
    
    printf("-/---/---/---/---/---/---/---/---/---/---/\n");
    
           // coleta de dados da carta 2.

    printf("Olá, seja bem vindo!\nDigite o código da cidade para cadastrar.\n");
    scanf("%s", codigo_cidade_carta_2);

    printf("Agora Digite o nome da cidade.\n");
    scanf("%s", nome_cidade_carta_2);

    printf("Digite a população da cidade.\n");
    scanf("%d",&populacao_carta_2);

    printf("Digite a aréa total da cidade.\n");
    scanf("%f", &area_km_carta_2);

    printf("Digite o PIB da cidade.\n");
    scanf("%f", &pib_carta_2);

    printf("Digite a quantidade de pontos turístico da cidade.\n");
    scanf("%d", &qtde_pontos_turisticos_carta_2);

    densidade_populacional_carta_2 = (float)populacao_carta_2 / area_km_carta_2; // calcula a densidade populacional da cidade
    pib_per_capita_carta_2 = (pib_carta_2 * 100000000) / (float)populacao_carta_2;  // calcula o PIB per Capita da cidade.


                // Exibição dos Dados das Cartas:
                // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
                // Exiba os valores inseridos para cada atributo da cidade, um por linha.


            // Exibição dos dados da carta 1.


    printf("Carta 1:\n");
    printf("Estado:          A\n");        
    printf("Código:          %s \n", codigo_cidade_carta_1);
    printf("Nome da cidade:  %s\n",nome_cidade_carta_1);
    printf("População:       %d\n", populacao_carta_1);
    printf("Aréa:            %.2f Km² \n", area_km_carta_1);
    printf("PIB:             %.2f Bilhões de reais\n", pib_carta_1);
    printf("Número de pontos turísticos: %d\n", qtde_pontos_turisticos_carta_1);
    printf("A densidade populacional da cidade é de: %.2f hab/Km²\n",densidade_populacional_carta_1);
    printf("PIB per Capita:  %.2f\n\n", pib_per_capita_carta_1);


         // Exibição dos dados da carta 2.


    printf("Carta 2:\n");
    printf("Estado:          B\n");        
    printf("Código:          %s \n", codigo_cidade_carta_2);
    printf("Nome da cidade:  %s\n",nome_cidade_carta_2);
    printf("População:       %d\n", populacao_carta_2);
    printf("Aréa:            %.2f Km² \n", area_km_carta_2);
    printf("PIB:             %.2f Bilhões de reais\n", pib_carta_2);
    printf("Número de pontos Turísticos: %d\n", qtde_pontos_turisticos_carta_2);
    printf("A densidade populacional da cidade é de: %.2f hab/Km²\n",densidade_populacional_carta_2);
    printf("PIB per Capita:  %.2f\n\n", pib_per_capita_carta_2);



    return 0;
}