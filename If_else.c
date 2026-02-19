#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){

    setlocale(LC_ALL,"Portuguese_Brazil");

    int a,b;

    printf("Digite o valor de a\n");
    scanf("%d", &a);

    printf("Digite o valor de b\n");
    scanf("%d", &b);

    if(a!=b){
            printf("\n Numeral diferente");


    }else{
    printf("\n Os numerais são iguais");

    }







    return 0;
}
