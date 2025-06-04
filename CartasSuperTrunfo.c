#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main()
{
    char estado, codigo[4], cidade[50], estado2, codigo2[4], cidade2[50];                                // Armazena a letra do estado (A-H) //Armazena o código da carta (ex: A01) // Armazena o nome da cidade
    int ponto_turistico, numero_da_carta, numero_da_carta2, ponto_turistico2;                            // Armazena população e pontos turísticos // Armazena o número da carta (1 a 4)
    float area, pib, densidade, percapita, superPoder, area2, pib2, densidade2, percapita2, superPoder2; // Armazena área e PIB da cidade
    unsigned long int populacao, populacao2;  // Armazena a população da cidade
    

    // variáveis para comparar as populações das cidades

    int comparacaopopu, comparacaoarea, comparacaopib, comparacaodensidade, comparacaopercapita, comparacaopontoturistico, comparacaosuperpoder;

    //----------------------------------------------------------------------------------------//

    printf("Bem-vindo ao cadastro das cidades! Vamos começar a montar o seu baralho Super Trunfo.\n");

    // Cadastro da primeira cidade

    printf("Digite uma letra de (A-H): ");
    scanf(" %c", &estado); // Lê a letra do estado

    printf("Digite um numero de 1 a 4: ");
    scanf("%d", &numero_da_carta); // Lê o número da carta

    sprintf(codigo, "%c%02d", estado, numero_da_carta); // Monta o código da carta (ex: A01)

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade); // Lê o nome da cidade

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao); // Lê a população da cidade

    printf("Digite a área da cidade: ");
    scanf("%f", &area); // Lê a área da cidade

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib); // Lê o PIB da cidade

    printf("Digite quantos pontos turisticos a cidade tem: ");
    scanf("%d", &ponto_turistico); // Lê o número de pontos turísticos

    densidade = (populacao / area); // Calcula a densidade populacional

    percapita = (pib / populacao);

    superPoder = (float)populacao + area + pib + percapita + ponto_turistico + (1 / densidade); // Calcula o super poder da cidade
    // Exibe os dados cadastrados

    printf("Codigo da carta e: %s\n", codigo);

    printf("A cidade é: %s\n", cidade);

    printf("Populaçao e de: %lu habitantes\n", populacao);

    printf("A área da cidade é de: %.f km²\n", area);

    printf("O PIB %s e de: %.2f Bilhoes de reais\n", cidade, pib);

    printf("A cidadde de %s tem %d pontos turisticos\n", cidade, ponto_turistico);

    printf("A densidade populacional e de %.2f habitantes por km²\n", densidade);

    printf("A renda per capita da cidade de %s e de: %.2f Bilhoes de reais\n", cidade, percapita);

    printf("O Super Poder da cidade %s e de: %.2f\n\n", cidade, superPoder);

    // CADASTRO DA SEGUNDA CIDADE
    // O código abaixo é semelhante ao primeiro, mas com a adição de uma mensagem para cadastrar mais cidades

    printf("Vamos cadastrar mais cidades\n\n");

    printf("Digite uma letra de (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite um numero de 1 a 4: ");
    scanf("%d", &numero_da_carta2);

    sprintf(codigo2, "%c%02d", estado2, numero_da_carta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turisticos a cidade tem: ");
    scanf("%d", &ponto_turistico2);

    densidade2 = (populacao2 / area2);

    percapita2 = (pib2 / populacao2);

    superPoder2 = (float)populacao2 + area2 + pib2 + percapita2 + ponto_turistico2 + (1 / densidade2); // Calcula o super poder da segunda cidade
    // Exibe os dados cadastrados da segunda cidades

    printf("Codigo da carta e: %s\n", codigo2);

    printf("A cidade é: %s\n", cidade2);

    printf("A população é de %lu habitantes\n", populacao2);

    printf("A área da cidade é de: %.2f km²\n", area2);

    printf("O Pib da cidade de %s e de: %.2f Bilhoes de reais\n", cidade2, pib2);

    printf("A cidade de %s tem %d pontos turisticos\n", cidade2, ponto_turistico2);

    printf("A densidade populacional e de %.2f habitantes por km²\n", densidade2);

    printf("A renda per capita da cidade de %s e de: %.2f Bilhoes de reais\n", cidade2, percapita2);

    printf("O Super Poder da cidade %s e de: %.2f\n\n", cidade2, superPoder2);

    // Comparação dos super poderes das duas cidades

    comparacaopopu = populacao > populacao2;

    comparacaoarea = area > area2;

    comparacaopib = pib > pib2;

    comparacaodensidade = densidade < densidade2;

    comparacaopercapita = percapita > percapita2;

    comparacaopontoturistico = ponto_turistico > ponto_turistico2;

    comparacaosuperpoder = superPoder > superPoder2;

    // Exibe os resultados das comparações

    printf("Comparando as Cidades:\n");

    printf("População: Carta %d venceu (%d)\n", comparacaopopu ? 1 : 2, comparacaopopu);
    printf("Área: Carta %d venceu (%d)\n", comparacaoarea ? 1 : 2, comparacaoarea);
    printf("PIb: carta %d venceu (%d)\n", comparacaopib ? 1 : 2, comparacaopib);
    printf("Pontos turistios: carta %d venceu (%d)\n", comparacaopontoturistico ? 1 : 2, comparacaopontoturistico);
    printf("Densidade: carta %d venceu (%d)\n", comparacaodensidade ? 1 : 2, comparacaodensidade);
    printf("Renda per capita: carta %d venceu (%d)\n", comparacaopercapita ? 1 : 2, comparacaopercapita);
    printf("Super poder: carta %d venceu (%d)\n", comparacaosuperpoder ? 1 : 2, comparacaosuperpoder);
    return 0; // Indica que o programa terminou corretamente
}
