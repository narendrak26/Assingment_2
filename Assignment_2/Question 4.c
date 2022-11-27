#include<stdio.h>
int main()
{
    int x,y;
    printf("Number Before swap ");
    scanf("%d%d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("Number after swap x = %d is y = %d",x,y);



    return 0;
}
