//27Left rotate an array.
#include<stdio.h>
void left_rotate(int[],int);

	int main(){
	int i,n;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array of element:\n");
	for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);
	}
	left_rotate(a,n);
}
void left_rotate(int a[],int n){
 int i,first,j;
  first=a[0];
  for(j=0;j<n-1;j++){
   a[j]=a[j+1];
  }
 a[j]=first;
 printf("Left rotate an array"); 
  for(i=0;i<n;i++){
   printf("\n%d",a[i]);
  }
}     
