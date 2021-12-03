//24Search an element in an array.
#include<stdio.h>
void search(int[],int,int);
int main(){
	int i,n,ele;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array of element:\n");
	for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);
	}
	printf("Enter Element\n");
	scanf("%d",&ele);
	search(a,n,ele);
}
void search(int a[],int n,int ele){
 int i,j,flag=0;
 for(i=0;i<n;i++){
  if (a[i] == ele)
   flag++;
  }
  if(flag)
    printf("Element found\n");
  else 
    printf("Element Not Found\n");
}	
	
