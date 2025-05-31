#include <stdio.h>
int main(){
    int A[5], B[5];
    for (int i = 0; i < 5; i++) {
        printf("Digite o valor do elemento %d do vetor A: ", i + 1);
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < 5; i++) {
        printf("Digite o valor do elemento %d do vetor B: ", i + 1);
        scanf("%d", &B[i]);
    }
    printf("O produto dos elementos:\n ");
    for (int i =0; i <5; i++) {
        printf("A[%d] e B[%d] é: %d\n", i, i, A[i] * B[i]);
    }
}