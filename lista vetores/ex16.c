#include <stdio.h>

int main(){
    int codigo;
    float vetor[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o valor do vetor[%d]: ", i);
        scanf("%f", &vetor[i]);
    }
    printf("Digite o codigo: ");
    scanf("%d", &codigo);
    switch (codigo)
    {
    case 0:
        printf("Finalizando...\n");
        return 0;
        break;
    
    case 1:
        printf("Vetor: ");
        for (int i = 0; i < 5; i++)
        {
            printf("%.2f ", vetor[i]);
        }
        printf("\n");
        break;
    case 2:
       printf("Vetor invertido: ");
        for (int i = 4; i >= 0; i--)
        {
            printf("%.2f ", vetor[i]);
        }
        printf("\n");
        break;

    default:
        printf("Codigo invalido!\n");
        break;
    }
}