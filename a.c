#include<stdio.h>
int main()
{
    int a,b,prod=1,i;
    printf("Enter a ");
    scanf("%d",&a);
    printf("Enter b ");
    scanf("%d",&b);
    for(i=1;i<=b;i++)
        prod*=a;
    printf("a^b = %d ",prod);
}
