//10Find the maximum between two numbers using the switch case.
#include<stdio.h>
void maximum(int,int);
int main(){
    int a,b;
    printf("Enter a two number");
    scanf("%d%d",&a,&b);
    maximum(a,b);
}
void maximum(int a , int b){
    switch (a<b)
    {
    case 0:
        printf("%d maximum number",a);
    case 1:
        printf("%d maximum number",b);
        break;
    }
}
[6:31 pm, 30/11/2021] Mohit Itep: 
