//11Read Integer (N) and Print the First Three Powers (N^1, N^2, N^3)
#include<stdio.h>
//#include<math.h>
int main()
{
    int num;
  printf("\nEnter The Number .\n");
  scanf("%d",&num);
  printf("\nOutput Is\n\n");
  num= num * num * num ;
  printf("%d\n",num);
  return 0;
}
