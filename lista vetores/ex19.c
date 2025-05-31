#include <stdio.h>
int main() {
    #define VET 50
    int vetor[VET], x, cont;
    for (int i = 0; i<VET; i++){
       vetor[i]= ((i + 5 * i)%(i + 1));
    }
  
    printf("vetor: [");
    for (int i=0; i<VET; i++){    
            printf("%d, ", vetor[i]);
        }
    printf("]\n");
}