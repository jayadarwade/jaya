#include<stdio.h>
int main (){
int i,j;
 int N;
printf("ENTER A NUMBER\n");
scanf("%d",&N);
switch(N){
 case 3:
          for (i=1;i<=7;i++)
           {
           for (j=1;j<=5;j++)
              {  
  		if(i==1&&j>=2&&j<=4||i==2&&j==1||i==7&&j>=2&&j<=4||i==6&&j==1||i==2&&j==5||i==3&&j==5||i==4&&j==4||i==5&&j==5||i==6&&j==5||i==4&&j==3)
                  
                    printf("*");
                     
              else   
                    printf(" ");
                  

               }
             printf("\n");

           }

         }
return 0;
}
