#include<stdio.h>
int main()
{
    int N,i=1,s=0;
    scanf("%d", &N);

  while(i<=N)
  {
      s=s+i;
      i++;
  }
printf("%d",s);
    return 0;
}