#include <stdio.h>
int main() {
    #define VET 10
    int vetor[VET], x, cont;
    for (int i = 0; i<VET; i++){
        printf("Digite o valor do vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
   printf("Digite um valor para x: ");
    scanf("%d", &x);
    cont = 0;
    printf("Os valores do vetor que sao multiplos de %d sao: ", x);
    for (int i=0; i<VET; i++){
        if (vetor[i]%x == 0){
            cont++;
            printf("%d, ", vetor[i]);
        }
    }
   printf("\nTotal de multiplos de %d: %d\n", x, cont);
   
}