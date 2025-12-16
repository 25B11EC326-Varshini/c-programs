#include<stdio.h>
int main()
{ int a,b,c;
  float average;
  printf("Enter the values of a,b,c:\n");
  scanf("%d%d%d",&a,&b,&c);
  average=(a+b+c)/3;
  printf("Average of three numbers is:%.1f",average);
  return 0;
}
