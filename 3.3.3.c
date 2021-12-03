//3Sort A Float Array In Ascending And Descending Order Using
#include<stdio.h>
void fAD(int [],int);
int main(){
  int n,i;
  printf("Enter size of array\n");
  scanf("%d",&n);
  int a[n];
  printf("Enter the element of array\n");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
 fAD(a,n);
}
void fAD(int a[],int n){
  int i,j,temp;
  for(i=0;i<n;i++){
    for(j=0;j<n-i-1;j++){
        if(a[j]>a[j+1]){
            temp=a[j+1];//swaping element 
            a[j+1]=a[j];
            a[j]=temp;
        }
   }
  }
  printf("Element After Ordering\n");
  for(i= 0; i<n; i++){
    printf("%d",a[i]);
  }
  printf("\n\n");
 }




