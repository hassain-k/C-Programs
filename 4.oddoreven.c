#include<stdio.h>
int main()
{

    int a;
    printf("Enter a Number:");
    scanf("%d",&a);

    if(a%2==0)
    printf("%d : It is Even Number",a);

    else 
    printf("%d : It is odd Number",a);
}