//Check whether a number is prime, Armstrong or perfect number using functions.
#include<stdio.h>
void prime(int);
void arm(int);
void per(int);
int main() {
  int n;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  prime(n);
  arm(n);
  per(n);
}
//Defination
void prime(int n){
int i,flag;
  for (i = 2; i <= n / 2; ++i) {
    
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  if (n == 1) {
    printf("1 is neither prime nor composite.");
  } 
  else {
    if (flag == 0)
      printf("%d is a prime number.", n);
    else
      printf("%d is not a prime number.", n);
  }
}
//Defination
void arm(int n)
{
int sum=0,temp,r;
temp=n;
while(n!=0)
{
r=n%10;
sum=sum+r*r*r;
n=n/10;
}
if(sum==temp)
printf("\n%d is armstrong number",temp);
else 
printf("\n%d is not an armstrong number",temp);
}
//Defination
void per(int n){
int i,sum=0;
for(i=1;i<n;i++)
{
if(n%i==0)
sum = sum+i;
}
if (sum==n)
printf("\n%d is a perfect number",n);
else 
printf("\n%d is not a perfect number",n);
}













