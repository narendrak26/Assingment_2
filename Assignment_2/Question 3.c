#include<stdio.h>
int main()
{
    int x=2,y=4,temp;
    printf("Enter the number ");
    scanf("%d%d",&x,&y);
    temp=x;
    x=y;
    y=temp;
    printf("Number after swap x = %d is y = %d",x,y);



    return 0;
}
