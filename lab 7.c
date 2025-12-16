#include<stdio.h>
#include<string.h>
int main(){
	char str1[100],str2[100];
	int length;
	scanf("%s",&str1);
	scanf("%s",&str2);
	length=strlen(str1);
	printf("%d=length\n",length);
	strcat(str1,str2);
	printf("%s=concentenated string",str1,str2);
	return 0;
}
