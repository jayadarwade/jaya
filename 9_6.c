//6Find all prime numbers between the given interval using functions.wrong
#include <stdio.h>
void prime(int);
int main() {
    int m, n, i, flag;
    printf("Enter two positive integers: ");
    scanf("%d",&n);
    prime(n);
}
void prime(int n){
int j,i,flag;

  for (i = 2; i <= n / 2; ++i) {
    for (j =2; j<= n /2; j++){
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }
    if (flag == 0)
      printf("%d is a prime number.",n);
   
   if (flag == 0)
      printf("%d is a prime number.", n);
      }
}


