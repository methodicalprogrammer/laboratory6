#include <stdio.h>
#include <stdlib.h>

long Power(long x, long n){
    int i;
    int numb = 1;
    for(i=0; i<n; i++){
        if(x==0 && n==0){
            numb = 1;
        }else {
            numb*=x;
        }
    }
    return numb;
}

int main(){
    long i, j;
    for(i=0; i<6; i++){
        for(j=0; j<8; j++){
            printf("%6ld ", Power(i,j));
        }
        printf("\n");
    }
}
