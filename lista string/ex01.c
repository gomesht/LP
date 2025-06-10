#include <stdio.h>
#include <string.h>
int main(){
    char text[100];
    int size;
    printf("Digite um texto: ");
    fgets(text, sizeof(text), stdin);
    printf("Texto original: %s", text);
    size = strlen(text); 
    if (size!= 0){
        if (text[0] >= 'a' && text[0] <= 'z'){
            text[0] = text[0] - 32; 
        }
        for (int i = 0; i < size-1; i++) {
            if (text[i] == ' '){
                if (text[i+1] >= 'a' && text[i+1] <= 'z') {
                    text[i+1] = text[i+1] - 32; 
                }
            }
        }   
        printf("Texto modificado: %s", text);    
    } else {
        printf("Texto vazio.\n");
    }
}

/*
com a biblioteca ctype.h
#include <stdio.h>
#include <string.h>
#include <ctype.h> 
int main() {
    char text[100];
    int size;

    printf("Digite um texto: ");
    fgets(text, sizeof(text), stdin);
    printf("Texto original: %s", text);
    text[strcspn(text, "\n")] = '\0';
    size = strlen(text);
    if (size == 0) {
        printf("Texto modificado: (Texto vazio)\n");
    } else if (islower(text[0])) {
        text[0] = toupper(text[0]);
        for (int i = 0; i < size - 1; i++) {      
            if (text[i] == ' ' && islower(text[i+1])) {
                text[i+1] = toupper(text[i+1]);
            }
        }
        printf("Texto modificado: %s\n", text); 
    }
}
*/