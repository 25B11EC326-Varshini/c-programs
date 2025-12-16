#include<stdio.h>
int difference(int a,int b,int c){
	return a-b-c;
}
int main(){
	int a,b,c,result;
	scanf("%d %d %d",&a,&b,&c);
	result=difference(a,b,c);
	printf("%d",result);
	return 0;
}
