//16Delete an element from an array at the specified position.
#include<stdio.h>
int deletelement(int arr[],int n,int pos)
{
	int i;
	if(pos<0 || pos >n)
	printf("Invalid position\n ");
	else
	{
	  for(i=pos-1;i<=n-1;i++)
	  arr[i]=arr[i+1];
	}
	n--;
	return n;

}
int main(){
	int arr[20],i,n,pos,result;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	printf("Enter the array of element:\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
	printf("array element:\n");
	for(i=0;i<n;i++)
	printf("%d\n",arr[i]);
	printf("Enter the position you want to element:\n");
	scanf("%d",&pos);
	result=deletelement(arr,n,pos);
	printf("After delete\n");
	for(i=0;i<result;i++)
	printf("%d\n",arr[i]);


return 0;
}
