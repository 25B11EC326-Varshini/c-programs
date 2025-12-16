#include<stdio.h>
int main(){
	int m1,m2,m3,m4,m5,total;
	float average;
	scanf("%d %d %d %d %d ",&m1,&m2,&m3,&m4,&m5);
	total=m1+m2+m3+m4+m5;
	average=total/5.0;
	printf("%d\n",total);
	printf("%.0f",average);
	return 0;
}
