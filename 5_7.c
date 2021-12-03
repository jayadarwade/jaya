//7Read and print elements of the array. – using recursion.
#include<stdio.h>
#include<string.h>
void print(int[],int);
int main(){
	int arr[20],n;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	printf("Enter the array of element:\n");
	for(int i=0;i<n;i++)
	{
	  scanf("%d",&arr[i]);
	}
        print(arr,n);	
}
//Defination
void print(int arr[],int n){
   if (n<0)
   return ;
   for(int i=0;i<n;i++){
   printf("%d",arr[i]);
 }
}
