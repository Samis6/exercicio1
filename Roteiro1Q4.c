#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int a=1,b=1;
    long int aux;
    int i=2;
    int n;

    printf("digite o numero de elementos da sequencia que quer:\n");
    scanf("%d",&n);

    printf("1� elemento %d\n",a);
    printf("2� elemento %d\n",b);


    while(i<n){
        i++;
        aux=a+b;
        a=b;
        b=aux;
        printf("%d� elemento: %d\n",i,aux);

    }

    return 0;
}
