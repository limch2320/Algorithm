#include <stdio.h>
#include <stdlib.h>

int main(void){
    char arr[10];
    char secret[10]="secret";

    scanf("%s", arr);
    
    printf("%lld\n", arr);
    printf("%lld\n", secret);
    
    printf("%s\n", arr);
    printf("%s\n", secret);
    
}