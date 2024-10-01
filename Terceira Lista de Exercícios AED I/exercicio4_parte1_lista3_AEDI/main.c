#include <stdio.h>
#include <stdlib.h>

int main(){

int numero;

do{
    printf("Numero entre 1 e 9: ");
    scanf("%d",&numero);

    if(numero<1 || numero>9){
        printf("Valor invalido\n");
    }
}while(numero<1 || numero>9);

for(int i=0;i<10;i++){
    printf("%d x %d = %d\n",numero,i,numero*i);
}

return 0;
}
