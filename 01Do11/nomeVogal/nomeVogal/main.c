#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[20];
    int cont;
    printf("Digite um nome (até 20 letras): ");
    gets(nome);
    for(cont=0; cont<=20; cont++){
        printf("%d", cont);
        if(nome[cont]==NULL){
            printf("ok");
        }

    }
    return 0;
}
