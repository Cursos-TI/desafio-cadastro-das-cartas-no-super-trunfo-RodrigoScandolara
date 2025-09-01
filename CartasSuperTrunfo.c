#include <stdio.h>

// Desafio Jogo Super Trunfo Nível Iniciante

int main() {
    
    //Definindo as variáveis para as duas cartas.
    int pturistico1 = 30, pturistico2 = 20; //Variável ponto turístico para as duas cartas (em int por ser número inteiro).
    int populacao1 = 128, populacao2 = 253; //Variável população para as duas cartas (em int por ser número inteiro).
    char codigo1[6] = "A01", codigo2[6] = "A01"; //Variável código para as duas cartas (em char por ser número inteiro + aracter).
    char estado1 = 'A', estado2 = 'B'; //Variável Estado para as duas cartas (em char por ser conjunto de caracteres).***
    char nome1[20] = "Campinas", nome2[20] = "Manaus"; //Variável nome da cidade para as duas cartas (em char por ser conjunto de caracteres).
    float area1 = 2.2, area2 = 7.5; //Variável área para as duas cartas (em float por ser decimal).
    float pib1 = 1.7, pib2 = 2.5; //Variável PIB para as duas cartas (em float por ser decimal).

   
    //Solicitando para o usuário entrar com as informações da primeira carta, e escaneando os dados informados.
    printf("Carta 1:\n");
    printf("Informe a letra correnpondente ao primeiro Estado: ");
    scanf("%c", &estado1);

    printf("Informe o código da carta, representado por um número: ");
    scanf("%s", &codigo1);

    printf("Informe o nome da primeira cidade: ");
    scanf("%s", nome1); //Strig não necessita de "&".

    printf("Informe a população da primeira cidade: ");
    scanf("%d", &populacao1);

    printf("Informe a área da primeira cidade em kilometros quadrados: ");
    scanf("%f", &area1);

    printf("Informe o PIB da primeira cidade em bilhões de Reais: ");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos da primeira cidade: ");
    scanf("%d", &pturistico1);


    //Exibindo as informações finais no terminal do usuário a respeito da primeira carta.
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1); //Duas variáveis para que exiba a letra do Estado e o código dele juntos.
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1); //"%.2f" para que o dado seja exibido com duas casas decimais.
    printf("PIB: %.2f Bilhões de Reais\n", pib1); //"%.2f" para que o dado seja exibido com duas casas decimais.
    printf("Número de Pontos Turísticos: %d\n", pturistico1);


    //Solicitando para o usuário entrar com as informações da segunda carta, e escaneando os dados informados.
    printf("Carta 2:\n");
    printf("Informe a letra correnpondente ao segundo Estado: ");
    scanf("%c", &estado2);

    printf("Informe o código da carta, representado por um número: ");
    scanf("%s", &codigo2);

    printf("Informe o nome da segunda cidade: ");
    scanf("%s", nome2); //Strig não necessita de "&".

    printf("Informe a população da segunda cidade: ");
    scanf("%d", &populacao2);

    printf("Informe a área da segunda cidade em kilometros quadrados: ");
    scanf("%f", &area2);

    printf("Informe o PIB da segunda cidade em bilhões de Reais: ");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos da segunda cidade: ");
    scanf("%d", &pturistico2);


    //Exibindo as informações finais no terminal do usuário a respeito da segunda carta.
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2); //Duas variáveis para que exiba a letra do Estado e o código dele juntos.
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2); //"%.2f" para que o dado seja exibido com duas casas decimais.
    printf("PIB: %.2f Bilhões de Reais\n", pib2); //"%.2f" para que o dado seja exibido com duas casas decimais.
    printf("Número de Pontos Turísticos: %d\n", pturistico2);

    return 0;


    
    
    
    
    
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
