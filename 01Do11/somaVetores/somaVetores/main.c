#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont, pares=2, vetor[9], pares2=2, apd1=9, vetordez[9], vetorsoma[9],x=1;
    printf("Este program faz um vetor com os numeros pares de 2 até o 20, um vetor com os numeros de 10 a 19, e depois faz um vetor com a soma desses dois.\n");
    for (cont=0;cont<=9;cont++){
        vetor[cont]=pares;
        pares=pares+pares2;

        apd1=(apd1+1);
        vetordez[cont]=apd1;
    }

    printf("\tVetores 2 ao 20.\n");
    for (cont=0; cont<9;cont++){
        printf("%d, ", vetor[cont]);
    }
    for(cont=8;cont<10;cont++){
        printf("%d. ", vetor[cont]);

    }


    printf("\n\n\tVetores 10 ao 19.");
    printf("\n");
    for (cont=0; cont<9;cont++){
        printf("%d, ", vetordez[cont]);
    }
    for(cont=8;cont<10;cont++){
        printf("%d. ", vetordez[cont]);

    }
    printf("\n\n");

    for(cont=0; cont<=9; cont++){
        vetorsoma[cont]=(vetor[cont]+vetordez[cont]);
    }

    printf("\n\tVetor soma.");
    printf("\n");
    for (cont=0; cont<9;cont++){
        printf("%d, ", vetorsoma[cont]);
    }
    for(cont=8;cont<10;cont++){
        printf("%d. ", vetorsoma[cont]);

    }
    printf("\n\n");

    return 0;
}
