#include <stdio.h>
int main(){
    int A[10], B[10], C[10];
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor do elemento %d do vetor A: ", i + 1);
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor do elemento %d do vetor B: ", i + 1);
        scanf("%d", &B[i]);
    }
    for (int i =0; i <10; i++) {
        C[i] = A[i] - B[i];
    }
   printf("Vetor C (A - B):[");
    for (int i = 0; i < 10; i++) {
        printf("%d, ", C[i]);
    }
    printf("]\n");
}