#include <stdio.h>
#include <stdlib.h>

int main()
{
    char verificar;

    printf("Digite uma letra: ");
    scanf("%c", &verificar);

    if(verificar=='a'||verificar=='A'||verificar=='e'||verificar=='E'||verificar=='i'||verificar=='I'||verificar=='o'||verificar=='O'||verificar=='u'||verificar=='U'){
        printf("A letra digitada foi uma vogal.");
    }
    else{printf("\tA letra digitada não foi uma vogal\n\n");}
    return 0;
}
