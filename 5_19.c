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
 int temp[n];

  int j = 0;
  int i,count=0;
  for (i = 0; i < n - 1; i++){
    if (a[i] != a[i + 1]){
      temp[j++] = a[i];
  temp[j++] = a[n - 1];
         count++;
  }
  }
  for (i = 0; i < j; i++){
    a[i] = temp[i];
       //count++;
       }
 printf("\nToatl Duplicates : ");
    printf("%d ",count);
    }
