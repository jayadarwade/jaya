#include<stdio.h>
int main (){
int i,j;
char ch;
printf("ENTER A CHARACTER\n");
scanf("%c",&ch);
switch(ch){
 case 'U':
          for (i=1;i<=5;i++)
           {
           for (j=1;j<=5;j++)
              {  
               if (i==5&&j==1||i==5&&j==5)
                 printf(" ");
              else if(j==1||j==5||i==5)
          
                 printf("*");
                     
              else   
                    printf(" ");

               }
             printf("\n");
           }
         }
return 0;
}
