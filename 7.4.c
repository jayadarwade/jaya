//4Find the length of a string.
#include<stdio.h>
#include<string.h>
int Lenght(char []);
//Run
 int main() 
{
 char s[100];
 printf("Enter a number\n");
 scanf("%s",s);
 int x=Lenght(s);
 printf("Lengh:%d\n",x);
}
//Defination
 int Lenght(char s[]){
 int i=0;
  while(s[i]!='\0'){
    i++;
  }
 return i;
}

