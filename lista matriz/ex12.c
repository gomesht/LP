#include <stdio.h>
int main(){
    int matriz[3][3], transposta[3][3];
    printf("Digite os valores da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    } 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }
    printf("Matriz transposta:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }
}