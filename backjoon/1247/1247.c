#include<stdio.h>

int main(void){
    long long int input, high, low = 0;
    scanf("%lld", &input);
    low = input%100000000000000;
    high = input/100000000000000;
}