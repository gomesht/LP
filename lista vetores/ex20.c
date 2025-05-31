#include <stdio.h>
int main() {
   int cont=0, vetor[10];
   for (int i = 0; i < 10; i++) {
      printf("Digite o valor do vetor[%d]: ", i);    
      do{
          scanf("%d", &vetor[i]);
        } while (vetor[i] < 0 || vetor[i] > 50);
        if (vetor[i] % 2 != 0) {
            cont++;
        }     
   }
   int vetImpar[cont];
   for (int i = 0; i<cont; i++){
    for (int j = 0; j < 10; j++) {
        if (vetor[j] % 2 != 0) {
            vetImpar[i] = vetor[j];
            i++;
        }
    }
   }
   printf("vetor: [\n");
   for (int i = 0; i < 10; i+=2) {
      printf("%d ,", vetor[i]);
      printf("%d \n", vetor[i+1]);
   }
    printf("]\n");
   printf("vetor impar: [\n");
   for (int i = 0; i < cont; i+=2) {
      printf("%d", vetImpar[i]);
        if (i+1 < cont) {

            printf(", %d \n", vetImpar[i+1]);
        }
        else {
            printf("\n");
        }
    } 
        printf("]\n");
}