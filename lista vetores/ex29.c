#include <stdio.h>
int main(){
    int vetor[10], somaPar=0, somaImpar=0;
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor do elemento %d do vetor A: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    printf("Elementos pares: ");
   for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            somaPar += vetor[i];
            printf("%d ", vetor[i]);
        } else {
            somaImpar += vetor[i];
        }
    }
printf("\n");
    printf("Soma dos elementos pares: %d\n", somaPar);
    printf("Elementos impares: ");
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 != 0) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\nSoma dos elementos impares: %d\n", somaImpar);
}