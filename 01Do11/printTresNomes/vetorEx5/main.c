#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[8], cont, somavetor=0, mediavetor, multiploDeCinco=0, maiorQueDezMenorQueTrinta=0, maiorValor=-100;

    for(cont=0;cont<=8;cont++){
        printf("Digite o %dº valor: ", cont+1);
        scanf("%d", &vetor[cont]);
    }
    for(cont=0;cont<=8;cont++){
        printf("\t%d\n", vetor[cont]);
        somavetor=somavetor+vetor[cont];
        if(vetor[cont]%5==0){multiploDeCinco++;}
        if(vetor[cont]>10 || vetor[cont]<30){maiorQueDezMenorQueTrinta++;}
        if(vetor[cont]>maiorValor){maiorValor=vetor[cont];}
    }
    mediavetor=somavetor/9;
    printf("A media do vetor é %d.\nEle tem %d multiplo(s) de cinco.\n", mediavetor, multiploDeCinco);
    if(maiorValor==-100){
        printf("\nO maior valor do vetor é -100, ou foi digitado valores menores que -100.\n");
    }
    if(maiorValor!=-100){
        printf("O maior valor digitado foi %d", maiorValor);
    }
    return 0;
}
