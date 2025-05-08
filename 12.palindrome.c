#include<stdio.h>
int main()
{
    int num,i,s=0;
    printf("Enter a Number:");
    scanf("%d",&num);

    for(i=num;i>0;i/=10)
    {
        s=s*10+i%10;
    }
    if(num==s)
    printf("palindrome");

    else printf("Not a palindrome");
}