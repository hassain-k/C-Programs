#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a Number");
    scanf("%d %d",&a,&b);

    if(a%b==0)
    printf("yes");
    else printf("No");
}