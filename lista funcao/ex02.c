#include <stdio.h>
void triangulo(int, int,int);
int main() {
    int ladoA, ladoB, ladoC;
    printf("Digite o primeiro valor de lado: ");
    scanf("%d", &ladoA);
    printf("Digite o segundo valor de lado: ");
    scanf("%d", &ladoB);    
    printf("Digite o terceiro valor de lado: ");
    scanf("%d", &ladoC);

    triangulo(ladoA, ladoB, ladoC);
}
void triangulo(int a, int b, int c) {
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf(" 1 ");
        } else if (a == b || a == c || b == c) {
            printf("2");
        } else {
            printf("3");
        }
    } else {
        printf("0");
    }
}