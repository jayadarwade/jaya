//9Convert uppercase string to lowercase.
#include<stdio.h>
#include<string.h>
char* toUppercase(char []);
int main(){
char s1[100];
char *p;
printf("Enter a string in lower case \n");
scanf("%s",s1);
p=toUppercase(s1);
printf("Uppercase :%s\n",p);
}
//Defination..
char* toUppercase(char s1[]){
static char result[100];
int i;
for(i=0;s1[i]!='\0';i++){
if (s1[i]>='A'&& s1[i]<='Z'){
result [i]=s1[i]+32;
}
else
result [i]=s1[i];
}
result [i]='\0';
return result;
}

