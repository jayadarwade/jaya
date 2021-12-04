//7Compare two strings....
#include<string.h>
#include<stdio.h>
//DEfinition..

	int compareto(char s1[],char s2[])
	{
	int l1,l2;
	l1=strlen(s1);
	l2=strlen(s2);
	int x=(l1>l2)?l1:l2;
	for (int i=0;i<x;i++){
	if((s1[i]-s2[i])==0)
	continue;
	else
	return s1[i]-s2[i];
	}
	return 0;
}
int main(){
	int x;
	char s1[100]; 
	char s2[100];
	printf("Enter two string\n");
	scanf("%s%s",s1,s2);
	x=compareto(s1,s2);
	printf("%d\n",x);
	
}
