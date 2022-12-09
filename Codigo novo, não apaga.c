//Exercício que tinha caído na prova.

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int matriz[3][3], somalinha[3], soma;
    float valores[3];
    int i, j;

    //Para informar o valor dos produtos
    printf("Indique os valor dos 3 produtos: \n");
    for(j = 0; j < 3; j++)
    {
        printf("Informe o valor do produto [%d]: ", j+1);
        scanf("%f", &valores[j]);
    }
    printf("\n");
    //Para gerar a matriz
    printf("Indique a quantidade dos produtos:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Indique o local: LINHA[%d] - COLUNA[%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    //Para calcular a matriz
    for(i = 0; i < 3; i++)
    {
        soma = 0;
        for(j = 0; j < 3; j++)
        {
            soma += matriz[i][j] * valores[j];
        }
        somalinha[i] = soma;
    }
    //Para exibir o resultado
    printf("\n");
    printf("Tabela com resultado total e produtos arrumados:\n");
    printf("-------------\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d |", matriz[i][j]);
        }
        printf("%d |", somalinha[i]);
        printf("\n");
    }
    printf("-------------");
}
