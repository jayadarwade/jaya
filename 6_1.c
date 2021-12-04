//1Add two matrices.
#include<stdio.h>
void add(int[][3],int[][3]);
int main()
{
 int a[3][3],b[3][3],r,c;
 printf ("Enter Matrix of (3x3)\n");
 for(r=0;r<3;r++){
   printf("Enter 3 element of %d row\n",(r+1));
   for(c=0;c<3;c++){
     scanf("%4d",&a[r][c]);
   }
 }
 
 for(r=0;r<3;r++){
   for(c=0;c<3;c++){
     printf("%4d",a[r][c]);
   }
   printf("\n");
 }
 
 for(r=0;r<3;r++){
  printf("Enter 3 element of %d row\n",(r+1));
  for(c=0;c<3;c++){
   scanf("%4d",&b[r][c]);
  }
 }
 
 for(r=0;r<3;r++){
  for(c=0;c<3;c++){
   printf("%4d",b[r][c]);
  }
  printf("\n");
 }
   add(a,b);
 }
 //Defination
 void add(int a[][3],int b[][3]){
 int sum[3][3],r,c;
 for(r=0;r<3;r++){
  for(c=0;c<3;c++){
   sum[r][c]=a[r][c]+b[r][c];	  
  }
 }
 
 printf("total sum of two matrix....................\n");
 for(r=0;r<3;r++){
  for(c=0;c<3;c++){		 
   printf("%4d",sum[r][c]);
  }
  printf("\n");
 }
 
}
