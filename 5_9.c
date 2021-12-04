//9Sum of all array elements. – using recursion.
#include<stdio.h>
#include<string.h>
void sum(int[],int);
static int sum1=0;
int main(){
	int arr[20],n;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	printf("Enter the array of element:\n");
	for(int i=0;i<n;i++)
	{
	  scanf("%d",&arr[i]);
	}
        sum(arr,n);
        printf("%d",sum1);	
}
//Definatio
 void sum(int arr[],int n){
   if (n<0)
   return ;
   sum1=arr[n]+sum1;
   sum(arr,--n);
 }
 	

