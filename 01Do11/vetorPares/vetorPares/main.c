#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont, pares=2, vetor[9], pares2=2;
    printf("Este program faz um vetor com os numeros pares de 2 até o 20.\n");
    for (cont=0;cont<=9;cont++){
        vetor[cont]=pares;
        pares=pares+pares2;

    }
    printf("\n\n");
    for (cont=0; cont<9;cont++){
        printf("%d, ", vetor[cont]);
    }
    for(cont=8;cont<10;cont++){
        printf("%d. ", vetor[cont]);

    }
    printf("\n\n");
    return 0;
}
