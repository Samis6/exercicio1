#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    float porcento;
    float desconto;
    float valor;
    float precof;
    printf("Insira a idade do cliente:\n");
        scanf("%d",&idade);
    printf("insira o valor do produto:\n");
        scanf("%f",&valor);

    if(idade<18){
        porcento=0.1;
    }else{
        porcento=0.2;
        }
    desconto=porcento*valor;
    precof=valor-desconto;

    printf("o desconto foi de %.2f\n",desconto);
    printf("o valor eh: %.2f",precof);


    return 0;
}
