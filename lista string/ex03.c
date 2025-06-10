#include<stdio.h>
#include<string.h>
int main(){
    char textA[100], textB[100], textC[100], textD[200];
    int sizeA, sizeB, sizeC;
    printf("Digite o texto: ");
    fgets(textA, sizeof(textA), stdin);
    textA[strcspn(textA, "\n")] = '\0';
    sizeA = strlen(textA);
    printf("Digite a palavra a ser substituida: ");
    fgets(textB, sizeof(textB), stdin);
    textB[strcspn(textB, "\n")] = '\0';
    sizeB = strlen(textB);
    printf("Digite a nova palavra: ");
    fgets(textC, sizeof(textC), stdin);
    textC[strcspn(textC, "\n")] = '\0';
    sizeC = strlen(textC);
   for (int i =0; i<sizeA; i++){
        int cont=0;
        for (int j = 0; j < sizeB; j++) {
            if (textA[i + j] == textB[j]) {
                cont++;
            } 
        }
        if (cont == sizeB) {
            for (int k = 0; k < sizeC; k++) {
                textD[i + k] = textC[k]; 
            }
            i += sizeC - 1; 
        } else {
            int l =sizeC-sizeB;
            textD[i] = textA[i+l]; 
        }
    }
    textD[sizeA] = '\0'; 
    printf("Texto modificado: %s\n", textD);

}
