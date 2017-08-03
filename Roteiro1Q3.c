#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1,b, maior;

    printf("Insira valores aleatoriamente:\n");

    while(a!=0){
        b=a;
        scanf("%d",&a);

        if(a>b){
            maior=a;
        }else{
            maior=b;
        }
    }

    printf("o maior valor eh:%d",maior);
    return 0;
}
