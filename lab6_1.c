#include <stdio.h>
#include <stdlib.h>

int min2(int a, int b){
    if(a>b){
        return b;
    } else{
        return a;
    } 
}

int min3(int min2, int c){
    if(min2>c){
        return c;
    } else{
        return min2;
    }
}

int min4(int min3, int d){
    if(min3>d){
        return d;
    } else{
        return min3;
    }
}

int min5(int min4, int e){
    if(min4>e){
        return e;
    } else{
        return min4;
    }
}

int main(){
    int a, b, c, d, e;
    printf("Type five integers: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    printf("The min of a and b is: %d\n", min2(a,b));
    printf("The min of a, b and c is: %d\n", min3(min2(a,b),c));
    printf("The min of a, b, c and d is: %d\n", min4(min3(min2(a,b),c),d));
    printf("The min of a, b, c, d and e is: %d\n", min5(min4(min3(min2(a,b),c),d),e));
}




