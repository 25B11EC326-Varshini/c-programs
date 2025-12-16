#include<stdio.h>
int main()
{ int marks[6],i;
printf("enter array elements");
for(i=0;i<=3;i++)
{ scanf("%d",&marks[i]);
}
//printing elements of array with loop
printf("display elements");
for(i=0;i<=3;i++)
{

printf("%d\n",marks[i]);
}
return 0;
}
