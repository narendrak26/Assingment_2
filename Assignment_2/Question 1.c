#include<stdio.h>
int main()
{
    int x;
    printf("enter the number ");
    scanf("%d",&x);
    x=x%10;
    printf("the unit digit of number is %d",x);
    return 0;
}
