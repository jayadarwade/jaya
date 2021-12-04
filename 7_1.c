//1String Char-Case Change
#include <stdio.h>
#include <string.h>
char* change(char []);
int main(){
 char s[20];
 char *p;
 printf("Enter a string:");
 scanf("%s",s);
 p=change(s);
 printf("%s",p);
}
//Defination
char* change(char s[]){
 static char result[100];
 int i;
 for(i=0;s[i]!='\0';i++){
  if (s[i]>='a'&& s[i]<='z'){
   result [i]=s[i]-32;
 }
 else
  result [i]=s[i];
 }
 result [i]='\0';
 return result;
}
