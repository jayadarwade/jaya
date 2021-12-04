//6Convert All Input String Simultaneously Into Asterisk ( * )
#include<stdio.h>
#include<string.h>
void name(char []);
int main(){
 char ch[100];
 printf("Enter a string:\n");
 scanf("%s",ch);
 name(ch);
}
//Defination
void name(char ch[])
{
 for(int i=0;ch[i]!='\0';i++)
  printf("*");
  printf("\n");
}  
     
