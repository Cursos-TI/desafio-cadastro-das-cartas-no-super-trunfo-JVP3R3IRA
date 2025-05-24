# include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main () {
    char estado;  // Armazena a letra do estado (A-H)
    char codigo[4]; // Armazena o código da carta (ex: A01)
    int  numero_da_carta;  // Armazena o número da carta (1 a 4)
    char cidade[50];   // Armazena o nome da cidade
    int populacao, ponto_turistico; // Armazena população e pontos turísticos
    float area, pib;  // Armazena área e PIB da cidade

printf("Vamos realizar o cadastramento das Cidades\n\n"); // Mensagem inicial
 
// Cadastro da primeira cidade

printf("Digite uma letra de (A-H): ");
scanf("%c", &estado); // Lê a letra do estado

printf("Digite um numero de 1 a 4: ");
scanf("%d", &numero_da_carta);  // Lê o número da carta

sprintf (codigo, "%c%02d", estado, numero_da_carta); // Monta o código da carta (ex: A01)

 printf("Digite o nome da cidade: "); 
 scanf("%s", &cidade); // Lê o nome da cidade

 printf("Digite a populacão da cidade: "); 
 scanf("%d", &populacao); // Lê a população da cidade

 printf("Digite a área da cidade: ");
 scanf("%f", &area); // Lê a área da cidade

 printf("Digite o PIB da cidade: ");
 scanf("%f", &pib); // Lê o PIB da cidade

 printf("Digite quantos pontos turisticos a cidade tem: ");
 scanf("%d", &ponto_turistico); // Lê o número de pontos turísticos

// Exibe os dados cadastrados

printf("Codigo da carta e: %s\n", codigo); 

 printf("A cidade é: %s\n", cidade);
 
 printf("Populaçao e de: %d habitantes\n", populacao);

printf("A área da cidade é de: %.2f km²\n", area);

printf("O PIB %s e de: %.3f Bilhoes de reais\n", cidade, pib);

printf("A cidadde de %s tem %d pontos turisticos\n\n", cidade, ponto_turistico);

// CADASTRO DA SEGUNDA CIDADE
// O código abaixo é semelhante ao primeiro, mas com a adição de uma mensagem para cadastrar mais cidades 

printf("Vamos cadastrar mais cidades\n\n");

printf("Digite uma letra de (A-H): ");
scanf(" %c", &estado);

printf("Digite um numero de 1 a 4:");
scanf("%d",  &numero_da_carta);

printf("Digite o nome da cidade: ");
scanf("%s", cidade);

printf("Digite a população da cidade: ");
scanf("%d", &populacao);

printf("Digite a área da cidade: ");
scanf("%f", &area);

printf("Digite o pib da cidade: ");
scanf("%f", &pib);

printf("Digite quantos pontos turisticos a cidade tem: ");
scanf("%d", &ponto_turistico);

printf("Codigo da carta e: %s\n", codigo);

printf("A cidade é: %s\n", cidade);

printf("A população é de %d habitantes\n", populacao);

printf("A área da cidade é de: %.2f km²\n", area);

printf("O Pib da cidade de %s e de: %.3f Bilhoes de reais\n", cidade, pib);

printf("A cidadde de %s tem %d pontos turisticos", cidade, ponto_turistico);

 

 return 0; // Indica que o programa terminou corretamente



}
