#include <stdio.h>
#include <stdlib.h>

int main(){
    int lado,base;

    printf("Lado: ");
    scanf("%d",&lado);
    printf("Base: ");
    scanf("%d",&base);

    for(int i=0;i<base;i++){
        if(i!=base-1){
           printf("*");
        }else{
            printf("*\n");
        }
    }

    for(int i=0;i<lado-2;i++){
        printf("*");
        for(int i=0;i<base-2;i++){
            printf(" ");
        }
        printf("*\n");
    }

    for(int i=0;i<base;i++){
        printf("*");
    }
return 0;
}
