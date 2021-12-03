//Copy all elements from an array to another array.
#include<stdio.h>
#include<string.h>
void copy(int[],int );
int main(){
 int n,i;
 printf("Enter the size of array:\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array of element:\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
 copy(a,n);
}
//Defination
void copy(int a[],int n){
 int i;
 int b[n];
 for(i=0;i<n;i++){
   b[i]=a[i];
   }
   printf("print copy array b[%d]:\n",n);
 for(i=0;i<n;i++){  
   printf("%d ",b[i]);
}
}
