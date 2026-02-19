#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){

    int a,b;
    int soma;


    setlocale(LC_ALL,"Portuguese");
    system("color 02");

    printf("Digite o valor de a:");
    scanf("%d", &a);

    printf("Digite o valor de b:");
    scanf("%d", &b);
    soma = a + b;



    printf("A soma de %d e %d é igual a: %d ", a , b , soma);







    return 0;
}
