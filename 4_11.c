//11.Check whether a number is even or odd using a switch case.
#include<stdio.h>
void maximum(int);
int main(){
    int a;
    printf("Enter a  number");
    scanf("%d",&a);
    maximum(a);
}
void maximum(int a ){
    switch (a=a%2==0)
    {
    case 0:
        printf("ODD");
        break;
    case 1:
        printf("EVEN");
        break;
    }
}
