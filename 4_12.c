//12.Check whether a number is positive, negative or zero using a switch case.
#include<stdio.h>
void check(int);
int main(){
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    check(n);

}
//defination
void check(int n){
    switch (n>0)
    {
    case 0:
        printf("It is negative number");
        break;
    case 1:
        printf("It is positive number");
        break;
    default:
        printf("zero");
        break;
    }
}
