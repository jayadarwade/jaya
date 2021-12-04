//13Count the total number of words in a string.
#include<stdio.h>
#include<string.h>
void total_number(char[]);
int main(){
 char s[50];
 printf("Enter the string:");
 scanf("%s",s);
 total_number(s);
 }
//defination
 void total_number(char s[]){
 int words=1;
 int i=0;
 while(s[i]!='\0')
 {
  if(s[i]==' '||s[i]=='\n'||s[i]=='\t')
  {
   words++;
  }
   i++;
 } 
  printf("Total number of words %d",i);
 }
   
