//26Sort even and odd elements of the array separately.
#include<stdio.h>
void separate(int[],int);
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
	separate(a,n);
}
//Defination
void separate(int a[],int n){
 int i,j=0,k=0;
 int E[n];
 int O[n];
 for(i=0;i<n;i++){
  if(a[i]%2==0){
    E[j]=a[i];
     j++;
  }
  else{
    O[k]=a[i];
     k++;
  }
 }
 printf("Even Array:");
 for(i=0;i<j;i++){
  printf("\n%d",E[i]);
 }
 printf("\nOdd Array:");
 for(i=0;i<k;i++){
  printf("\n%d",O[i]);
 }
} 
