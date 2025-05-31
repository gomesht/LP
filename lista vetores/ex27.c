#include <stdio.h>
int main(){
    int vetor[10];
    for(int i = 0; i < 10; i++){
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    printf("Os numeros primos digitados foram:\n");
    for(int i = 0; i < 10; i++){
        int cont = 0;
       for (int j=vetor[i]; j>0; j--){
            if(vetor[i] % j == 0){
                cont++;
            }
        }
        if(cont == 2){
            printf("%d na posição [%d]/n ", vetor[i],i);
       }
    }
}