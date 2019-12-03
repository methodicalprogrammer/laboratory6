#include <stdio.h>
#include <stdlib.h>


int main(){
    float i;
    float u = 0;
    for(i=0; i<=10; i++){
        if(u==0){
            u = 1;
        } else{
            u = u + 1.0/(u*i);
        }
        printf("With %f terms e = %f\n", i, u);
    }

    return 0;
}