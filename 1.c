//8Find the first occurrence of a character in a given string.
#include<stdio.h>
#include<string.h>
int main(){
char s[50],ch;
int i,index=0,n;

printf("Enter a string in lower case \n");
scanf("%s",s);
printf("enter character \n");
scanf("%c",&ch);
n=strlen(s);
for (i=0;i<=n;i++){
   if(s[i]==ch)
    {
     index=i;
    }
    }
    if (s[i]==0)
    printf("%dnot found character\n",ch);
    else
    printf("%d at first location",index);
    
  } 
