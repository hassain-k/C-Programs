#include<stdio.h>
int main()
{
    int N,i=1,s=0;
    printf("Enter a NUmber:");
    scanf("%d", &N);

  while(i<=N)
  {
      s=s+i;
      i++;
  }
printf("The Natural Num for %d is :%d",N,s);
    return 0;
}