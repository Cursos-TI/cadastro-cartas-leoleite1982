#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
      //Aqui estou difinindo quais serão as minhas variáveis 
    char Estado;
    char CodCarta [04];
    char nome_cidade [15];
    int População;
    float Área;
    float PIB;
    int Pontos_turisticos;
     
  // Área para entrada de dados
      //Aqui eu defini como será feito a entrada dos dados das cartas.
    printf("Digite a letra de um Estado (de A a H): \n");
    scanf("%c", &Estado);
    
    printf("Digite o código da carta (exemplo: A01, B02): \n");
    scanf("%s", &CodCarta);

    printf("Digite nome da Cidade: \n");
    scanf("%s", &nome_cidade);

    printf("Digite sua população: \n");
    scanf("%i", &População);

    printf("Qual sua área em m²: \n");
    scanf("%f", &Área);

    printf("Qual o seu PIB: \n");
    scanf("%f", &PIB);

    printf("Quantidade de pontos turisticos: \n");
    scanf("%i", &Pontos_turisticos);


  // Área para exibição dos dados da cidade
    
    printf("A letra do é Estado: %c\n", Estado);
    printf("O código da carta é: %s\n", CodCarta);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("Sua população é de: %i\n", População);
    printf("Área em m²: %f\n", Área);
    printf("Seu PIB é de: %f\n", PIB);
    printf("Tem: %i " "Pontos turisticos", Pontos_turisticos);

  
return 0;
} 
