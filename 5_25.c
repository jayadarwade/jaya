//25Sort array elements in ascending or descending order.
#include<stdio.h>
void Ascending_decending(int [],int);
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
   Ascending_decending(a,n);
}
//Definetion
void Ascending_decending(int a[],int n){
 int i,j,temp;
  for(i=0;i<n;i++){
   for(j=i+1;j<n;j++){
    if(a[i]>a[j]){
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
    }
   }
  }
  printf("Array elements in ascending or descending order:\n");
  for(i=0;i<n;i++)
   printf("%d\n",a[i]);
}
