#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int vetor[8], busca,cont, escolha;
    setlocale(LC_ALL, "portuguese");

    printf("Esse programa cria um vetor com 8 numeros, e depois ve se há algum numero digitado dentro dele.\n");
    for(cont=0;cont<8;cont++){
        printf("Digite o %dº numero: ", cont+1);
        scanf("%d", &vetor[cont]);
    }
    do{
    printf("Digite um numero para procurarmos dentro do vetor: ");
    scanf("%d", &busca);
    for (cont=0;cont<8;cont++){
        if(vetor[cont]==busca){
            printf("O numero %d, está na posição %d do vetor", busca, cont);
        }
    }
    printf("Caso deseja continuar digite 1, caso não queira aperte outra tecla");
    gets(escolha);
    }while(escolha==1);
    return 0;
}
