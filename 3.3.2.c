//3.2Print Multiplication Table Using
#include <stdio.h>
int Table(int);
int main() {
  int n, i;
  printf("Enter an integer: ");
  scanf("%d", &n);
  Table(n);
  
  }
//DEfination
  int Table(int n){
    for (int i = 1; i <= 10; ++i) {
      printf("%d * %d = %d \n", n, i, n * i);
  }
  return 0;
}
