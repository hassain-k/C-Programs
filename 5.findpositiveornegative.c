#include <stdio.h>

int main()
{
    char num;
    printf("Enter a Number:");
    scanf("%d", &num);
    
    if(num==0)
     printf("Neither positive nor negative");
     else if(num<0)
      printf("Negative");
      else printf("Positive");
    
    return 0;
}