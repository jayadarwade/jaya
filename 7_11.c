//11Find a total number of alphabets, digits or special character in a string.
#include<stdio.h>
#include<string.h>
void total(char[]);
int main(){
 char s[50];
 //int i,alphabet=0,digits=0,specialcharacters=0;
 printf("Enter the string:");
 scanf("%s",s);
 total(s);
}
//Defination
void total(char s[]){
 int i,alphabet=0,digits=0,specialcharacters=0;
 for(i=0;s[i];i++)
 {
   if((s[i]>=65&&s[i]<122)||(s[i]>=97&&s[i]<=122))
      alphabet++;
   else if(s[i]>=48&&s[i]<=57)
      digits++;
   else
      specialcharacters++;
 }
  printf("Alphabet = %d\n",alphabet);   
  printf("Digits = %d\n",digits);     
  printf("special character = %d\n",specialcharacters);   
 }     
    
