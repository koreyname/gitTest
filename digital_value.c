#include<stdio.h>

int main(){
    float a;
    scanf("%f",&a);
    printf("The value of a is %.2f before calculating\n",a);
    int b=(a*10+5)/10;
    printf("The value of a is %d after calculating\n",b);
} 