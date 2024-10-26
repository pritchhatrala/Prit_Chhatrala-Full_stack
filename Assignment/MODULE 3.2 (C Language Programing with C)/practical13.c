#include<stdio.h>

int main(){
int number, reverse;

printf("Enter a number:");
scanf("%d",&number);

while(number>0)
{
    reverse = number % 10;
    number = number / 10;
    printf("%d",reverse);
}
}