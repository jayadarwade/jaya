//15Check whether a string is a palindrome or not.
#include<stdio.h>
#include<string.h>
void palindrom(char[]);
int main(){
 char string1[20];
 printf("Enter a string:");
 scanf("%s",string1);
 palindrom(string1);
}

void palindrom(char string1[20]){
 int i,flag=0,lenght;
 lenght = strlen(string1);
 for(i=0;i<lenght;i++){
  if(string1[i]!=string1[lenght-i-1]){
   flag = 1;
   break;
  } 
}
 if (flag){
    printf("%s is not a palindrom",string1);
    }
 else 
    printf("%s is  a palindrom",string1);
}  
