//9Print all perfect numbers between the given interval using functions.
#include<stdio.h>
void per(int);
int main() {
  int end;
  printf("Enter interval  positive integer: ");
  scanf("%d",&end);
  per(end);
  
}
void per(int end){
 int j,i,sum=0;
  for(i=1;i<end;i++)
  {
  for(j=1;j<i;j++){
    if(i%j==0)
    sum = sum+j;
  }
  if (sum==i)
      printf("perfect number %d\n",i);
   sum=0;
  }
}
