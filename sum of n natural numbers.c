#include<stdio.h>
int main()
{ int n,i,sum;
 printf("Enter the value of n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 { 
   sum=sum+i;
 }
   printf("sum of n natural numbers is%d",sum);
   return 0;
}
