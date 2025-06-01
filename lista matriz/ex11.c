#include <stdio.h>
int main() {
    int matriz[3][3], soma =0;
    printf("Digite os valores da matriz 3x3:\n");
    for (int i =0; i<3; i++){
        for(int j =0;j<3; j++){
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i+j==2) { 
                soma += matriz[i][j];
            }
        }
    }
    printf("A soma dos elementos da diagonal secundária é: %d\n", soma);
}