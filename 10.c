//Factorial of a Given Number....?
#include<stdio.h>
 void factorial(int);
int main()
{
      int n;
	 printf("Enter a number\n");
	 scanf("%d",&n);
       factorial(n);
}
 
  void factorial(int n){
  int i=1,factorial;
  while(i<=n)
  {
   factorial=(n*i);
   i++;
  }
  printf("%d :%d",n,factorial);
  }
