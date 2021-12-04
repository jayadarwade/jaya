//Convert a Person’s Name in Abbreviated form......
#include<stdio.h>
#include<string.h>
 void abb(char, char, char);
 //run
 int main()
 {
 char fname[10],mname[10],lname[10];
 printf("enter your firts name:\n");
 scanf("%s",fname);
 
  printf("enter your firts name:\n");
 scanf("%s",mname);
 
 printf("enter your firts name:\n");
 scanf("%s",lname);
 
 abb(fname,mname,lname);
 }
 //defination
  void abb(char fname, char mname, char lname)
  {
     printf("Abbreviated name : \n");
     printf("%c,%c,%s\n",fname,mname,lname);
  }
