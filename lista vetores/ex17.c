#include <stdio.h>
int main() {
    int vetor[10];
    for (int i = 0; i<10; i++){
        printf("Digite o valor do vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    for (int i=0; i<10; i++){
        if (vetor[i]<0){
            vetor[i] = 0;
        }
    }
    printf("Vetor modificado: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
}