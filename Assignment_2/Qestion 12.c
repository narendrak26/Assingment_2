#include<stdio.h>
int main()
{
    int x;
    printf("enter 3 digit no");
    scanf("%d",&x);
    x=(x%10)*100+(x/10);
    printf("%d",x);




    return 0;
}
