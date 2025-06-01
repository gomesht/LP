#include <stdio.h>
int main(){
    int matriz[4][4],triangular[4][4];
    printf("Digite os valores da matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i < j) {
                triangular[i][j] = 0; 
            } else {
                triangular[i][j] = matriz[i][j];
            }
        }
    }
    printf("Matriz triangular inferior:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", triangular[i][j]);
        }
        printf("\n");
    }
}