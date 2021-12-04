//12Count the total number of even and odd elements in an array.
#include<stdio.h>
void totalnumber(int[],int);
int main(){
 int n,i;
   printf("Enter the size of array:\n");
   scanf("%d",&n);
   int a[n];
   printf("Enter the array of element:\n");
   for(i=0;i<n;i++)
   { 
     scanf("%d",&a[i]);
   }
   totalnumber(a,n);
}
//Defination
void totalnumber(int a[],int n){
 int i,counteven=0,countodd=0;
  for(i=0;i<n;i++){
   if(a[i]%2==0){
    counteven++;
   }
   else
    countodd++;
  }
   printf("Even number%d",counteven);
   printf("\nodd number%d",countodd);
}	
