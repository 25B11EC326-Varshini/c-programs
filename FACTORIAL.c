#include<stdio.h>
int main()
{ int N,F=1,i;
 printf("Enter the values if N");
 scanf("%d",&N);
 for(i=2;i<=N;i++)
 { 
   F=F*i;
 }
 printf("Factorial of N is%d",F);
 return 0;
}
