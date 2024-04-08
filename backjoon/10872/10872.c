#include <stdio.h>

int main(void){
    int a,i,b;
    
    scanf("%d", &a);
    b=1;

    for(int i=1;i<=a;i++){
        b = i*b;
    }
    printf("%d",b);
}