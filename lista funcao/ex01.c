#include <stdio.h>
int soma(int );

int main() {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n); 
    printf("A soma dos numeros de 1 a %d e: %d\n", n, soma(n));  
}

int soma(int n){
    int total = 0;
    for(int i = 1; i <= n; i++) {
        total += i;
    }
    return total;
}