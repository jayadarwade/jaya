//13Count the total number of negative elements in an array.
#include<stdio.h>
int negative(int a[],int n)
{
	int i,count=0;

	for(i=0;i<n;i++)
	{
	 if(a[i]<=0)
	  count++;
	}
 return count;
}
int main(){
 int n,i,l;
 printf("Enter the size of array:\n");
 scanf("%d",&n);
 int a[n];
 printf("Enter the array of element:\n");
 for(i=0;i<n;i++)
 { 
   scanf("%d",&a[i]);
 }
 l=negative(a,n);
 printf("count=%d\n",l);
 return 0;
}
