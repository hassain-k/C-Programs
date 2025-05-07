#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a Two Numbers:");
    scanf("%d %d",&a,&b);
    int tmp;
    tmp=a;
    a=b;
    b=tmp;

    printf("swaped output of a=%d and b=%d",a,b);
} 