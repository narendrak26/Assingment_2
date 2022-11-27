#include<stdio.h>
int main()
{

    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    if((n&1)==1)

        printf("Number is Odd %d ",n);
        else
            printf("Number is Even %d",n);

return 0;
}
