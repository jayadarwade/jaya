//22Find the reverse of an array.
#include<stdio.h>
void reverse(int[],int);
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
 reverse(a,n);
} 
//Defination
void reverse(int a[],int n){
  int i;
  printf("Revers Array is:");
  for(i=n-1;i>=0;i--){
   printf("\n%d",a[i]);
  }
}
