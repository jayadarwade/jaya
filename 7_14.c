//14Find the reverse of a string.
#include<stdio.h>
#include<string.h>
char* Revers(char []);
char* Revers(char s[]){
 static char rev [100];
 int i=0,l;
 l=strlen(s)-1;
 while(l>=0){
   rev[i++]=s[l--];
 }
 rev[i]='\0';
 return rev;
 }
int main(){
 char s[50];
 char *p;
 p=s;
 printf("Enter the string:");
 scanf("%s",s);
 p = Revers(s);
 printf("Revers : %s\n",p);
}


