//3.4Find GCD of two Numbers Using
#include <stdio.h>
void GDP(int ,int);
int main()
{
    int n1, n2, i;

    printf("Enter two integers: ");
    scanf("%d%d", &n1, &n2);
    GDP(n1,n2); 
    }
    //defination
void GDP(int n1 ,int n2){
int gcd,i;
    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", n1, n2, gcd);
}
