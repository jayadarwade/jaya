//6Remove All Vowels From A String
#include <stdio.h>
#include <string.h>
void Remove_vowel(char []);
int main(){
 char s[20];
 printf("Enter a string:");
 scanf("%s",s);
 Remove_vowel(s);
}
//Defination
 void Remove_vowel(char s[]){
 int lenght=0,i,j;
 lenght=strlen(s);
 for (i=0;i<lenght;i++)
 {
  if(s[i]=='a'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='e'||s[i]=='A'||s[i]=='I'||s[i]=='U'||s[i]=='O'||  s[i]=='E')
 
  {
   for(j=i;j<lenght;j++)
   {
     s[j]=s[j+i];
   }
    i--;
    lenght--;
  }
 }
  printf("After removing vowels from string is:%s\n",s);
}
