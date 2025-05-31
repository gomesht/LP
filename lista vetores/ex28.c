#include <stdio.h>
int main(){
    int v1[10], v2[10], v[10], contv1=0, contv2=0;
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor do elemento %d do vetor A: ", i + 1);
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < 10; i++) {
        if (v[i] % 2 == 0) {
            v1[contv1] = v[i];
            contv1++;
        } else {
            v2[contv2] = v[i];
            contv2++;
        }
    }
    printf("Vetor v1(pares): [");
    for (int i =0; i <10; i++) {
        for (int j = 0; j < contv1; j++) {
            if (v1[j] == v[i]) {
                printf("%d ", v1[j]);  
            }     
        }
    }
     printf("]\n");
    printf("Vetor v2(impares): [");
    for (int i =0; i <10; i++) {
        for (int j = 0; j < contv2; j++) {
            if( v2[j] == v[i]) {
                printf("%d ", v2[j]);    
            }   
        }
    }
     printf("]\n"); 
}