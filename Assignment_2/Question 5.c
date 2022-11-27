#include<stdio.h>
int main()
{

    int x,sum=0;
    printf("Enter three digit number");
    scanf("%d",&x);
    sum=x%10;
    x=x/10;
    sum=(x%10)+sum;
    x=x/10;
    sum=sum+x;


    printf("sum of three digit number is  x = %d",sum);
    return 0;
}
