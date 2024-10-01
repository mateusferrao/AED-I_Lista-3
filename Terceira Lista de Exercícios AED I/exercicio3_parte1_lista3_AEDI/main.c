#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero,palpite;

    srand(time(NULL));
    numero = (rand()%20)+1;

    do{
        printf("Palpite(entre 1 e 20): ");
        scanf("%d",&palpite);

        if(palpite>numero){
            printf("O numero e menor\n");
        }else if(palpite<numero){
            printf("O numero e maior\n");
        }

    }while(palpite!=numero);

    printf("Acertou");


return 0;
}
