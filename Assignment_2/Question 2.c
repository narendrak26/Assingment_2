#include<stdio.h>
int main()
{

    int x;
    printf("enter the number ");
    scanf("%d",&x);
    x=x/10;
    printf("Number without its last digit is %d",x);
    return 0;
}
