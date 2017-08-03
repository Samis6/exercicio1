#include <stdio.h>
#include <stdlib.h>

int main()
{

    float salariob;
    float desconto;
    float porcento;
    float salarioL;
    printf("Insira o valor do salario bruto:\n");
              scanf("%f",&salariob);

    if(salariob<420){
        porcento=0.08;
    }else if(salariob>420&&salariob<1350){
        porcento=0.09;
    }else{
        porcento=0.1;
    }
    desconto=porcento*salariob;
    salarioL=salariob-desconto;

    printf("o desconto foi de %.2f\n",desconto);
    printf("o valor do salario Liquido eh: %.2f",salarioL);


    return 0;
}
