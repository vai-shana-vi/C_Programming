#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter number:");
    scanf("%d",&a);
     b = (a/100)+(a/10)%10+(a%10);
     printf("Result=%d",b);
}
