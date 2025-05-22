#include <stdio.h>

int main() {

    printf("Comit")
    int i, opcao;
    int turismo[2], area[2];
    char nome[2][30], codigo[2][4], pais[2][30];
    long int populacao[2], pib[2];
    float densidade[2], pper_capita[2], poder[2];
    printf("+++ Bem-vindo ao Trunfo! +++\n");
    printf("=== Cadastro de Cidades ===\n");
    printf("\n");
    
    // Vai repetir a imformação duas vezes, para armazenar as duas informações e possivelmente fazer uma comparação
    for (i = 0; i < 2; i++) {
        printf("=== Cidade %d ===\n", i + 1);
        printf("País: ");
        scanf("%s", pais[i]);
        printf("Estado: ");
        scanf("%s", nome[i]);
        printf("Código: ");
        scanf("%s", codigo[i]);
        printf("População: ");
        scanf("%d", &populacao[i]);
        printf("Área(km²): ");
        scanf("%d", &area[i]);
        printf("PIB: ");
        scanf("%ld", &pib[i]);
        printf("Pontos Turisticos: ");
        scanf("%d", &turismo[i]);

        densidade[i] = (float) populacao[i] / area[i];
        pper_capita[i] = (float) pib[i] / populacao[i];
        poder[i] = (float) populacao[i] + pib[i] + area[i] + turismo[i] + pper_capita[i] - densidade[i];
    }

    do {

        printf("\nEscolha o atributo para comparar:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade\n");
        printf("6 - PIB per capita\n");
        printf("7 - Super Poder\n");
        printf("8 - Sair\n");
        printf("9 - Comparar Todos os Atributos!\n");
        printf("Digite o número da opção: ");
        scanf("%d", &opcao);

    } while (opcao < 1 || opcao > 9);

    switch (opcao)
        {
        case 1:
            printf("\nPopulação:\n%s: %ld\n%s: %ld\n", pais[0], populacao[0], pais[1], populacao[1]);
            if (populacao[0] > populacao[1])
                printf("%s tem maior população.\n", pais[0]);
            else if (populacao[0] < populacao[1])
                printf("%s tem maior população.\n", pais[1]);
            else
                printf("Empate!\n");
            break;
        case 2:
            printf("\nÁrea:\n%s: %d\n%s: %d\n", pais[0], area[0], pais[1], area[1]);
            if (area[0] > area[1])
                printf("%s tem maior área.\n", pais[0]);
            else if (area[0] < area[1])
                printf("%s tem maior área.\n", pais[1]);
            else
                printf("Empate!\n");
            break;
        case 3:
            printf("\nPIB:\n%s: %ld\n%s: %ld\n", pais[0], pib[0], pais[1], pib[1]);
            if (pib[0] > pib[1])
                printf("%s tem maior PIB.\n", pais[0]);
            else if (pib[0] < pib[1])
                printf("%s tem maior PIB.\n", pais[1]);
            else
                printf("Empate!\n");
            break;
        case 4:
            printf("\nPontos Turísticos:\n%s: %d\n%s: %d\n", pais[0], turismo[0], pais[1], turismo[1]);
            if (turismo[0] > turismo[1])
                printf("%s tem mais pontos turísticos.\n", pais[0]);
            else if (turismo[0] < turismo[1])
                printf("%s tem mais pontos turísticos.\n", pais[1]);
            else
                printf("Empate!\n");
            break;
        case 5:
            printf("\nDensidade:\n%s: %.2f\n%s: %.2f\n", pais[0], densidade[0], pais[1], densidade[1]);
            if (densidade[0] > densidade[1])
                printf("%s tem maior densidade.\n", pais[0]);
            else if (densidade[0] < densidade[1])
                printf("%s tem maior densidade.\n", pais[1]);
            else
                printf("Empate!\n");
            break;
        case 6:
            printf("\nPIB per capita:\n%s: %.2f\n%s: %.2f\n", pais[0], pper_capita[0], pais[1], pper_capita[1]);
            if (pper_capita[0] > pper_capita[1])
                printf("%s tem maior PIB per capita.\n", pais[0]);
            else if (pper_capita[0] < pper_capita[1])
                printf("%s tem maior PIB per capita.\n", pais[1]);
            else
                printf("Empate!\n");
            break;
        case 7:
            printf("\nSuper Poder:\n%s: %.2f\n%s: %.2f\n", pais[0], poder[0], pais[1], poder[1]);
            if (poder[0] > poder[1])
                printf("%s tem maior Super Poder.\n", pais[0]);
            else if (poder[0] < poder[1])
                printf("%s tem maior Super Poder.\n", pais[1]);
            else
                printf("Empate!\n");
            break;
        case 8:
            printf("Saindo do programa...\n");
            break;  
        case 9:
            printf("\n--- Comparação de Todos os Atributos ---\n");
            printf("População: %s\n", (populacao[0] > populacao[1]) ? "Carta 1 Ganhou" : (populacao[0] < populacao[1]) ? "Carta 2 Ganhou" : "Empate");
            printf("Área: %s\n", (area[0] > area[1]) ? "Carta 1 Ganhou" : (area[0] < area[1]) ? "Carta 2 Ganhou" : "Empate");
            printf("PIB: %s\n", (pib[0] > pib[1]) ? "Carta 1 Ganhou" : (pib[0] < pib[1]) ? "Carta 2 Ganhou" : "Empate");
            printf("Pontos Turísticos: %s\n", (turismo[0] > turismo[1]) ? "Carta 1 Ganhou" : (turismo[0] < turismo[1]) ? "Carta 2 Ganhou" : "Empate");
            printf("Densidade: %s\n", (densidade[0] < densidade[1]) ? "Carta 1 Ganhou" : (densidade[0] > densidade[1]) ? "Carta 2 Ganhou" : "Empate");
            printf("PIB per capita: %s\n", (pper_capita[0] > pper_capita[1]) ? "Carta 1 Ganhou" : (pper_capita[0] < pper_capita[1]) ? "Carta 2 Ganhou" : "Empate");
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
}

