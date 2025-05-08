#include<stdio.h>
int main()
{
    int num,i,s=0;
    printf("Enter a Number:");
    scanf("%d",&num);

    for(i=num;i>0;i=i/10)
    {
        s=s+i%10;
    }
    
    printf("The sum of given input %d is %d",num,s);
}