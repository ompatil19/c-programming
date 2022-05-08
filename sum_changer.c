#include <stdio.h>
int compute(int n)
{
   int sum=0,d;
   while(n!=0)
   {
       d=n%10;
       sum+=d;
       n=n/10;
   }
   return sum;
}
void main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int sum=compute(n);int sum1,t=n+1;
    if((sum%2)==0)
    {
       while(1)
       {
         sum1=compute(t);
         if((sum1%2)==1)
         {
             printf("%d",t);
             break;
         }
         t++;
       }
    }
    else
    {
        
       while(1)
       {
         sum1=compute(t);
         if((sum1%2)==0)
          {
             printf("%d",t);
             break;
         }
         t++;
       }
        
    }
}