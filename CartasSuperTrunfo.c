#include <stdio.h>

// Desafio Jogo Super Trunfo Nível Iniciante

int main() {
    
    //Definindo as variáveis para as duas cartas.
    int pturistico1, pturistico2; //Variável ponto turístico para as duas cartas (em int por ser número inteiro).
    unsigned long int populacao1, populacao2; //Variável população para as duas cartas
    char codigo1[6] = "01", codigo2[6] = "05"; //Variável código para as duas cartas (em char por ser número inteiro + aracter).
    char estado1, estado2; //Variável Estado para as duas cartas (em char por ser conjunto de caracteres).***
    char nome1[20] = "Campinas", nome2[20] = "Manaus"; //Variável nome da cidade para as duas cartas (em char por ser conjunto de caracteres).
    float area1, area2; //Variável área para as duas cartas (em float por ser decimal).
    float pib1, pib2; //Variável PIB para as duas cartas (em float por ser decimal).
   
    float denPopulacional1, denPopulacional2; // Variável Densidade Populacional das duas cartas, em float por ser número decimal. **NÍVEL AVENTUREIRO**
    float pibCapita1, pibCapita2; // Variável PIB per Capita das duas cartas, em float por ser número decimal. **NÍVEL AVENTUREIRO**
    
    //Criando variáveis do NÍVEL MESTRE
    float superPoder1, superPoder2;
    int pturisticoBatalha; // Tipo "int" pois deverá exibir o resultado comparativo (1 ou 0).
    int populacaoBatalha; // Tipo "int" pois deverá exibir o resultado comparativo (1 ou 0).
    int areaBatalha; // Tipo "int" pois deverá exibir o resultado comparativo (1 ou 0).
    int denPopulacionalBatalha; // Tipo "int" pois deverá exibir o resultado comparativo (1 ou 0).
    int pibBatalha; // Tipo "int" pois deverá exibir o resultado comparativo (1 ou 0).
    int pibCapitaBatalha; // Tipo "int" pois deverá exibir o resultado comparativo (1 ou 0).
    int superPoderBatalha; // Tipo "int" pois deverá exibir o resultado comparativo (1 ou 0).
       
    //Solicitando para o usuário entrar com as informações da primeira carta, e escaneando os dados informados.
    printf("Carta 1:\n");
    printf("Informe a letra correnpondente ao primeiro Estado: ");
    scanf("%c", &estado1);

    printf("Informe o código da carta, representado por um número: ");
    scanf("%s", codigo1); //Strig não necessita de "&".

    printf("Informe o nome da primeira cidade: ");
    scanf("%s", nome1); //Strig não necessita de "&".

    printf("Informe a população da primeira cidade: ");
    scanf("%lu", &populacao1);

    printf("Informe a área da primeira cidade em kilometros quadrados: ");
    scanf("%f", &area1);

    printf("Informe o PIB da primeira cidade em bilhões de Reais: ");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos da primeira cidade: ");
    scanf("%d", &pturistico1);

    // Definindo o cálculo das variáveis. **NÍVEL AVENTUREIRO**
    denPopulacional1 = (float)populacao1 / area1; // Comversão explicita para variável "população".
    pibCapita1 = pib1 / (float)populacao1; // Comversão explicita para variável "população".
    pibCapita1 *= 1000000000; // Vezes 1 bilhão, para converter o resultado para "reais"
    
    // Definindo cálculo do Super Poder. ***NÍVEL MESTRE***
    superPoder1 = ((float) populacao1 + area1 + pib1 + (float) pturistico1 + pibCapita1) + (1 / denPopulacional1); // Comversão explicita para variável "população" e "ponto turístico".

    //Exibindo as informações finais no terminal do usuário a respeito da primeira carta.
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1); //Duas variáveis para que exiba a letra do Estado e o código dele juntos.
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1); //"%.2f" para que o dado seja exibido com duas casas decimais.
    printf("PIB: %.2f Bilhões de Reais\n", pib1); //"%.2f" para que o dado seja exibido com duas casas decimais.
    printf("Número de Pontos Turísticos: %d\n", pturistico1);
    printf("Densidade Populacional: %.2f hab/Km²\n", denPopulacional1); //**NÍVEL AVENTUREIRO**
    printf("PIB per Capita: %.2f reais\n", pibCapita1); //**NÍVEL AVENTUREIRO**
    printf("Super Poder: %.2f\n", superPoder1); //***NÍVEL MESTRE***
    
    //Solicitando para o usuário entrar com as informações da segunda carta, e escaneando os dados informados.
    printf("\nCarta 2:\n");
    printf("Informe a letra correspondente ao segundo estado: ");
    scanf(" %c",&estado2); // Foi inserido um espaço antes do especificador de formato para corrigir o erro de "reconhecimento de ENTER como caracter".

    printf("Informe o código da carta, representado por um número: ");
    scanf("%s", codigo2); //Strig não necessita de "&".

    printf("Informe o nome da segunda cidade: ");
    scanf("%s", nome2); //Strig não necessita de "&".

    printf("Informe a população da segunda cidade: ");
    scanf("%lu", &populacao2);

    printf("Informe a área da segunda cidade em kilometros quadrados: ");
    scanf("%f", &area2);

    printf("Informe o PIB da segunda cidade em bilhões de Reais: ");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos da segunda cidade: ");
    scanf("%d", &pturistico2);

    // Definindo o cálculo das variáveis. **NÍVEL AVENTUREIRO**
    denPopulacional2 = (float)populacao2 / area2; // Comversão explicita para variável "população".
    pibCapita2 = pib2 / (float)populacao2; // Comversão explicita para variável "população".
    pibCapita2 *= 1000000000; // Vezes 1 bilhão, para converter o resultado para "reais"

    // Definindo cálculo do Super Poder. ***NÍVEL MESTRE***
    superPoder2 = ((float) populacao2 + area2 + pib2 + (float) pturistico2 + pibCapita2) + (1 / denPopulacional2); // Comversão explicita para variável "população" e "ponto turístico".

    //Exibindo as informações finais no terminal do usuário a respeito da segunda carta.
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2); //Duas variáveis para que exiba a letra do Estado e o código dele juntos.
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2); //"%.2f" para que o dado seja exibido com duas casas decimais.
    printf("PIB: %.2f Bilhões de Reais\n", pib2); //"%.2f" para que o dado seja exibido com duas casas decimais.
    printf("Número de Pontos Turísticos: %d\n", pturistico2);
    printf("Densidade Populacional: %.2f hab/Km²\n", denPopulacional2); //**NÍVEL AVENTUREIRO**
    printf("PIB per Capita: %.2f reais\n", pibCapita2); //**NÍVEL AVENTUREIRO**
    printf("Super Poder: %.2f\n", superPoder2); //***NÍVEL MESTRE***


    // Criando comparações dos atributos. ***NÍVEL MESTRE***
    pturisticoBatalha = pturistico1 > pturistico2;
    populacaoBatalha = populacao1 > populacao2;
    areaBatalha = area1 > area2;
    denPopulacionalBatalha = denPopulacional1 < denPopulacional2;
    pibBatalha = pib1 > pib2;
    pibCapitaBatalha = pibCapita1 > pibCapita2;
    superPoderBatalha = superPoder1 > superPoder2;

    // Exibindo resutado da batalha. ***NÍVEL MESTRE***
    printf("\nComparação de Cartas:\n");
    printf("População: %d\n", populacaoBatalha);
    printf("Área: %d\n", areaBatalha);
    printf("PIB: %d\n", pibBatalha);
    printf("Pontos Turísticos: %d\n", pturisticoBatalha);
    printf("Densidade Populacional: %d\n", denPopulacionalBatalha);
    printf("PIB per Capita: %d\n", pibCapitaBatalha);
    printf("* Super Poder *: %d\n", superPoderBatalha);

    return 0;
}
