#include <stdio.h>
#include <string.h>
int main(){
    char textA[100], textB[100],textC[200];
    int sizeA, sizeB, sizeC, contA=0, contB=0;
    printf("Digite o primeiro texto: ");    
    fgets(textA, sizeof(textA), stdin);
    textA[strcspn(textA, "\n")] = '\0';
    sizeA = strlen(textA);
    printf("Digite o segundo texto: ");
    fgets(textB, sizeof(textB), stdin);
    textB[strcspn(textB, "\n")] = '\0';
    sizeB = strlen(textB);
    sizeC= sizeA + sizeB ; 
    for (int i = 0; i<sizeC; i++){
        if (i%2==0){                       
                if(contA < sizeA){
                    textC[i] = textA[contA];
                    contA++;
                } else {
                    textC[i] = textB[contB];
                    contB++;
                }                
        } else {           
                if(contB< sizeB){
                    textC[i] = textB[contB];
                    contB++;
                } else {
                    textC[i] = textA[contA];
                    contA++;
                }            
        } 
    }
    textC[sizeC] = '\0';
    printf("Texto resultante: %s\n", textC);
}