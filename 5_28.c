//28right rotate an array.
#include<stdio.h>
void right_rotate(int[],int);

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
	right_rotate(a,n);
}
//Defination
void right_rotate(int a[],int n){
 int i,last,j;
  last=a[n-1];
  for(j=n-1;j>0;j--){
   a[j]=a[j-1];
  }
 a[j]=last;
 printf("Right rotate an array"); 
  for(i=0;i<n;i++){
   printf("\n%d",a[i]);
  }
}     
