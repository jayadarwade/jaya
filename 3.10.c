//10Print A Calendar Taking Input From User Using Loop
#include<stdio.h>
#include<stdlib.h>
void calender(int ,int );
int main(){
 int k,day;
 printf("c program to print a calendar with star with input day\n");
 printf("Enter total no. of days in a month");
 scanf("%d",&day);
 printf("\n\nEnter first day start from <0-mon 5-saturday  &6-sunday > end with sunday:");
 scanf("%d",&k);
 printf("\n mon\ttue\twed\tthu\tfri\tsat\tsun\n\n");
 printf("----------------------------------------------------\n\n");
 calender(day,k);
 }
 //Defination
 void calender(int day ,int k){
 int j,dt=1;
  for(j=k;j>0;j--)
  {
	printf("\t");
  }
  while (dt<=day)
  {
    if (k!=0)
    {
      if (k%7==0)
        printf("\n");
    }
     printf("%d\t",dt);
     dt++;
     k++;
  }
}

