#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){

    int a,b;
    int soma;
    int sub;
    float div;
    int mult;

    // set a biblioteca de localização e linguagem em portugues brasil
    setlocale(LC_ALL,"Portuguese");
    // seleciona a cor das letras e do
    system("color 02");

    printf("Digite o valor de a:");
    scanf("%d", &a);

    printf("Digite o valor de b:");
    scanf("%d", &b);
    soma = a + b;
    sub = a - b;
    div = a / b;
    mult = a * b;



    printf("\n A soma de %d e %d é igual a: %d\n ", a , b , soma);
    printf("\n A subtração de %d e %d é igual a: %d \n", a , b , sub);
    printf("\n A divisão de %d e %d é igual a: %.1f\n ", a , b , div);
    printf("\n A multiplicação de %d e %d é igual \na: %d ", a , b , mult);







    return 0;
}
