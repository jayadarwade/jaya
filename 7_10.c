//10Toggle case of each character of a string.
#include<stdio.h>
#include<string.h>
void toggle(char[]);
int main(){
 char s[50];
 int i;
 printf("Enter the string:");
 scanf("%s",s);
 toggle(s);
 }
 //Defination
 void toggle(char s[]){
 int i;
 for(i=0;s[i];i++)
 {
   if(s[i]>=65&&s[i]<122)
    s[i]+32;
   else if(s[i]>=97&&s[i]<=122)
    s[i]-=32;
 }
 printf("string in Toggle case =%s\n",s);
 }   
