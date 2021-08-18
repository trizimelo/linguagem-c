#include <stdio.h>

void main(){
    double nota1, nota2, media;
    printf("Entre com nota1 nota2:");
    scanf("%lf %lf",%nota1, &nota2);
    media=(nota1+nota2)/2;
    printf("Amedia entre %4.1f e %4.1f = %4.1f\n",nota1,nota2,media);

    
}