#include<stdio.h>
int main()
{
    int i,n=200,sum=0;
    printf("Numbers between 100 and 200,divisible by 9\n");
    for (i=100;i<=n;i++)
    {
     if(i%9==0)
     {   
          sum=sum+i;
          printf("%d ",i);
     }
     
    }
    printf("\nThe sum:%d",sum);
    return 0;
}