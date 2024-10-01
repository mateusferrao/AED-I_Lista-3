#include <stdio.h>
#include <stdlib.h>

int main(){
    int anoInformado,ano=1;

    printf("Digite um ano: ");
    scanf("%d",&anoInformado);

    while(ano<=anoInformado){
        if((ano%4==0 && ano%100!=0) || (ano%4!=0 && ano%400==0)){
            printf("%d \n",ano);
        }
        ano++;
    }
return 0;
}
