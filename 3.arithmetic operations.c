#include<stdio.h>
int main()
{
    int a,b;
    char c;
    printf("ENTER 1st data:");
    scanf("%d",&a);
    printf("ENTER 2nd data:");
    scanf("%d",&b);
    printf("Enter the arithmetic operation:");
    scanf(" %c",&c);

    if(c=='+')
    printf("%d + %d = %d\n",a,b,a+b);

    else if(c=='-')
    printf("%d - %d = %d\n",a,b,a-b);
   
    else if(c=='*')
    printf("%d * %d = %d\n",a,b,a*b);

    else if(c=='/')
    printf("%d / %d = %d\n",a,b,a/b);
    
    return 0;

}