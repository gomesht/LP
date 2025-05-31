#include <stdio.h>
int main(){
    int A[10], B[10], C[20], ja=0,jb=0;
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor do elemento %d do vetor A: ", i + 1);
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor do elemento %d do vetor B: ", i + 1);
        scanf("%d", &B[i]);
    }
    for (int i =0; i <20; i++) {
        if (i%2== 0) {
            C[i] = A[ja];
            ja++;
        } else{
            C[i] =B[jb];
            jb++;
        }
    }
   printf("Vetor C :[");
    for (int i = 0; i < 20; i++) {
        printf("%d, ", C[i]);
    }
    printf("]\n");
}