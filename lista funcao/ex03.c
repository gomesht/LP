#include <stdio.h>
int eLetra(char);
int eVogal(char);
int eConsoante(char);
int main() {
    char letra;
    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    if (eLetra(letra)) {
        if (eVogal(letra)) {
            printf("A letra '%c' e uma vogal.\n", letra);
        } else if (eConsoante(letra)) {
            printf("A letra '%c' e uma consoante.\n", letra);
        }
    } else {
        printf("'%c' nao e uma letra valida.\n", letra);
    }
}
int eLetra(char letra) {
    if (letra >= 'A' && letra <= 'Z'|| letra >= 'a' && letra <= 'z') {
        return 1; 
    } else {
        return 0; 
    }   
}
int eVogal(char letra) {
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        return 1; 
    } else {
        return 0; 
    }
}
int eConsoante(char letra) {
    if(letra >= 'a' && letra <= 'z' && !eVogal(letra)|| 
       letra >= 'A' && letra <= 'Z' && !eVogal(letra)) {
        return 1; 
    } else {
        return 0; 
    }
}