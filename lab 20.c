#include<stdio.h>
int main()
{
	int a,b;
	int *p1,*p2;
	scanf("%d %d",&a,&b);
	p1=&a;
	p2=&b;
	if(*p1>*p2)
	printf("*p1 greater");
	else
	printf("*p2 greater");
	return 0;
}
