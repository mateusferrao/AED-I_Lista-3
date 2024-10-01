#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;

    printf("Qual numero da sequencia de fibonacci? ");
    scanf("%d",&numero);

    for(int i=1;i<=numero;i++){

        printf("%d) %.0f\n",i,(pow(((1+sqrt(5))/2),i)-pow(((1-sqrt(5))/2),i))/sqrt(5));
    }




return 0;
}
