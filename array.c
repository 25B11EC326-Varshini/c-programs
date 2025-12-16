#include<stdio.h>
int main()
{ int a[10],i,n;
printf("how many elements");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}
printf("the elements are");
for(i=0;i<n;i++){

printf("%d",a[i]);}
return 0;
}
