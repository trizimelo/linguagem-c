#include <stdio.h>

void main(){
    int x, i, soma = 0;
    for (i = 0; i <10; i++)
    {
        printf("Digite o item %d:",i);
        scanf("%d:",&x);
        soma = soma + x;
    }
    printf("Soma: %d",soma);

}