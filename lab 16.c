#include<stdio.h>
int sum(int a,int b,int c){
	return a+b+c;
}
int main(){
	int a,b,c,result;
	scanf("%d %d %d",&a,&b,&c);
	result=sum(a,b,c);
	printf("%d",result);
	return 0;
}
