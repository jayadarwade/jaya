//30Calculate profit or loss.
#include <stdio.h>
void profir_loss(int, int);
int main()
{
    int cp,sp;
    printf("Enter cost price: ");
    scanf("%d", &cp);
    printf("Enter selling price: ");
    scanf("%d", &sp);
    profir_loss(cp,sp);
    
}    
  void profir_loss(int cp, int sp){
  int amt;
    if(sp > cp)
    {
        amt = sp - cp;
        printf("Profit = %d", amt);
    }
    else if(cp > sp)
    {
        amt = cp - sp;
        printf("Loss = %d", amt);
    }
    else
    {
        printf("No Profit No Loss.");
    }
}    
