#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, primeiro=1, segundo=1, proximo;

    printf("numero inteiro: ");
    scanf("%d",&num);

    for(int i=0;;i++){
        if(i==0){
            printf("%d\n",primeiro);
        }else if(i==1){
            printf("%d\n",segundo);
        }else{
            proximo = segundo + primeiro;
            if(proximo >= num) break;
            primeiro = segundo;
            segundo = proximo;
            printf("%d\n",proximo);
        }
    }

    return 0;
}
