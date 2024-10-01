#include <stdio.h>
#include <stdlib.h>

int main(){
    float altura,totalH=0,totalM;

    for(int i=0;i<5;i++){
        printf("Altura homem %d: ",i+1);
        scanf("%f",&altura);

        totalH+=altura;
    }

        for(int i=0;i<5;i++){
        printf("Altura mulher %d: ",i+1);
        scanf("%f",&altura);

        totalM+=altura;
    }

    printf("Media Masculina = %f\nMedia Feminina = %f\nMedia Geral = %f",(totalH/5),(totalM/5),(totalH+totalM)/10);

return 0;
}
