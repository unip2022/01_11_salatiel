#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char nome[3][20];
    int cont, conty;
    setlocale(LC_ALL, "portuguese");
    printf("Esse programa printa os nomes digitados a seguir.\n");
    for(cont=0; cont<3;cont++){
    printf("Digite o %dº nome: ", cont+1);
    gets(nome[cont]);
    }


    for(cont=0;cont<=2;cont++){
        printf("\n%s", nome[cont],cont);
        printf("\no nome %s tem %d letras", nome[cont],strlen(nome[cont]));
    }
   /* for (conty=0; conty<3; conty++){
        for(cont=0; cont<=20; cont++){
            if(nome[conty][cont]!=NULL){
                printf("%c", nome[conty][cont]);
            }
        }
    }
*/
    return 0;
}
