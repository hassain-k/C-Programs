#include<stdio.h>

int main()
{
    int num,i;
    scanf("%d", &num);

    for(i=num;i>0;i=i/10)
    {
        num=i%10;
       printf("%d",num);
      
    }

    return 0;
}