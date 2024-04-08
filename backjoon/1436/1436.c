#include <stdio.h>

int main(void){
    int a = 0;
    int N = 0;
    int c = 0;

    scanf("%d", &N);

    while (c != N){
        a++;
        int temp = a;
            while (temp != 0)
            {
                if(temp%1000==666){
                    c++;
                    break;
                }
                else temp/=10;
            }   
    }
    printf("%d",a);
}