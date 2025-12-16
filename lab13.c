#include<stdio.h>
int main()
{
	int n,i,key,found=0;
	int arr[n];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	scanf("%d",&key);
	for(i=0;i<n;i++){
		if(arr[i]==key){
			printf("element found at %d",i+1);
			found=1;
			break;
		}
	}
	if(!found)
	printf("element not found");
	return 0;
}
