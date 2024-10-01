#include <stdio.h>
#include <stdlib.h>

int main(){
    int r,x=1,y=12,z=0;

    while(z<5){
        r = y%3;
        if(r=0){
            x+=2;
        }else{
            y+=5;
            z++;
        }
    }

    printf("%d",x);

return 0;
}
