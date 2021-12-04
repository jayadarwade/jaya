//12Count the total number of vowels and consonants in a string.
#include<stdio.h>
#include<string.h>
void count_vowel_consonats(char[]);
int main(){
 char s[50];
 printf("Enter the string:");
 scanf("%s",s);
 count_vowel_consonats(s);
}
//Defination
 void count_vowel_consonats(char s[]){
 int i,vowel=0,consonant=0;
 for(i=0;s[i];i++)
 {
   if((s[i]>=65&&s[i]<122)||(s[i]>=97&&s[i]<=122))
    {
     if(s[i]=='a'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='e'||s[i]=='A'||s[i]=='I'||s[i]=='U'||s[i]=='O'||  s[i]=='E')
     vowel++;
     else
     consonant++;
    }
 }
 printf("Vowels=%d\n",vowel);   
 printf("Consonants=%d\n",consonant);   
} 
