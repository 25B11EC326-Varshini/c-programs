#include<stdio.h>
int main()
{ int a,b,c;
printf("enter the values of a,b,c:\n");
scanf("%d%d%d",&a,&b,&c);
a=b;
b=c;
c=a;
printf("values of a,b after swapping");
printf("a=%d\n",a);
printf("b=%d",b);
return 0;
}
