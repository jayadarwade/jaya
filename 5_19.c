//19Count the total number of duplicate elements in an array.
#include<stdio.h>
void dupalicate(int[],int);
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
	dupalicate(a,n);
}
void dupalicate(int a[],int n){
  int j;
  int i,count=0;
  for (i = 0; i < n - 1; i++){
   scanf("%d",&a[i]);
   }
   for (i=0;i<n;i++)
   {
      for (j=i+1;j<n;j++)
      {
        if(a[i] != a[i + 1]){
      count++;
      break;
      }
   }
 }
}      
