#include<stdio.h>
void main()
{
    float amount;
    float rate;
    float time;
    float simpleinterest;

    printf("enter the amount:");
    scanf("%f",&amount);

    printf("enter the rate:");
    scanf("%f",&rate);

    printf("enter the time:");
    scanf("%f",&time);
    
    simpleinterest=(amount*rate*time)/100;

    printf("simple interest=%f",simpleinterest);
}