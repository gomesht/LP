#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char tabuleiro[3][3];

void imprimeMenu();
void inicializaTabuleiro();
void imprimeTabuleiro();
void jogadorJogador();
void jogadorComputador();
int ganhou(int jogadorRodada, int l, int c);
int checaPosicao(int l, int c);
char jogadorAtual = 0;

int main(){
  int op;
  do{
    system("clear");
    imprimeMenu();
    scanf("%d",&op);
    switch(op){
      case 1:
        jogadorJogador();
        break;
      case 2:
        jogadorComputador();
        break;
      case 3:
        printf("\nTchau!\n");
        break;
      default:
        printf("\nOpcao invalida!\n");
        break;
    }
  }while(op!=3);
}

void imprimeMenu(){
  printf("\nMenu");
  printf("\n1 - Jogador contra jogador");
  printf("\n2 - Jogador contra computador");
  printf("\n3 - Sair");
  printf("\nOpcao: ");
}

void inicializaTabuleiro(){
  for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
      tabuleiro[i][j] = ' ';
}

void imprimeTabuleiro(){
  printf("\n");
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      if(j!=2)
        printf("\t%c\t|",tabuleiro[i][j]);
      else
        printf("\t%c\t",tabuleiro[i][j]);
    }
    printf("\n");
    if(i!=2){
      for(int j=0;j<3;j++){
        if(j!=2)
          printf("\t_\t|");
        else
          printf("\t_\t");
      }
    }
    printf("\n");
  }
}

void jogadorJogador(){
  int linha,coluna,cont=0;
  inicializaTabuleiro();
  do{
    system("clear");
    imprimeTabuleiro();
    if (cont % 2 == 0){
      printf("\nvez do Jogador X");
      jogadorAtual = 0;
    } else {
      printf("\nVez do Jogador O");
      jogadorAtual = 1;
    }
    printf("\nEscolha a linha (0, 1, 2): ");
    scanf("%d", &linha);
    printf("Escolha a coluna (0, 1, 2): ");
    scanf("%d", &coluna);
    if (checaPosicao(linha, coluna)){
      if (cont % 2 == 0){
        tabuleiro[linha][coluna] = 'X';
      } else {
        tabuleiro[linha][coluna] = 'O';
      }
      cont++;
    } else {
      printf("\nPosição já ocupada ou inválida. Tente uma posição válida!\n");
    }
    
  }while(!ganhou(jogadorAtual, linha, coluna)&& cont < 9);
  if (cont == 9 && !ganhou(jogadorAtual, linha, coluna)){
    printf("\nDeu velha!\n");
  }
}

void jogadorComputador(){
  int cont = 0 , linha, coluna;
  jogadorAtual = rand() % 2; 
  inicializaTabuleiro();
  srand(time(NULL));
  int jogadorRodada = jogadorAtual;
  do{
    system("clear");
    imprimeTabuleiro();
  
   if (jogadorAtual % 2 == 0){
      printf("\nvez do Jogador X");
      printf("\nEscolha a linha (0, 1, 2): ");
      scanf("%d", &linha);
      printf("Escolha a coluna (0, 1, 2): ");
      scanf("%d", &coluna);
    } else {
      printf("\nVez do computador");
      linha = rand() % 3;
      coluna = rand() % 3;
    }
  
    if (checaPosicao(linha, coluna)){
      if (jogadorAtual % 2 == 0){
        tabuleiro[linha][coluna] = 'X';
        jogadorAtual = 1;
      } else {
        tabuleiro[linha][coluna] = 'O';
        jogadorAtual = 0;
      }
      cont++;
    } else {
      printf("\nPosição já ocupada ou inválida. Tente uma posição válida!\n");
    }
    
  }while(!ganhou(jogadorRodada, linha, coluna) && cont < 9);
  if (cont == 9 && !ganhou(jogadorRodada, linha, coluna)){
    printf("\nDeu velha!\n"); 
  }
}

int checaPosicao(int l, int c){
  if(l < 0 || l > 2 || c < 0 || c > 2 || tabuleiro[l][c] != ' '){
    return 0;
  } else{
    return 1;
  }
}

int ganhou (int jogadorRodada, int l, int c){
  char jogador;
   if (jogadorRodada == 0)
      jogador = 'X';
    else
      jogador = 'O';  
  if ((tabuleiro[l][0] == jogador && tabuleiro[l][1] == jogador && tabuleiro[l][2] == jogador) || 
      (tabuleiro[0][c] == jogador && tabuleiro[1][c] == jogador && tabuleiro[2][c] == jogador) || 
      (tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador) || 
      (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador)) { 
    imprimeTabuleiro();
   
    printf("\nJogador %c ganhou!\n", jogador);
    return 1;
  }
  return 0;
}