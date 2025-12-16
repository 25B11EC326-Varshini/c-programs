#include<stdio.h>
int main(){
	int i,n,key;
	printf("enter size of array");
	scanf("%d",&n);
	int arr[n];
	printf("enter array elements");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("enter element to search");
	scanf("%d",&key);
	for(i=0;i<n;i++){
		if(key==arr[i]){
			printf("element found at index:%d",i);
			return 0;
		}	}
		printf("element not found");
		return 0;
	}
