#include <stdio.h>

int main(){
    int i = 0, soma = 0, x;

    while (i<10)
    {
        printf("Digite o item %d",i);
        scanf("%d",&x);
        if (x<0)
        {
            printf("Número inválido");
            break;
        }
        soma = soma + x;
        i++;
    }
    printf("Total :%d",soma);
}