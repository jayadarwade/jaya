//8Converting Temperature Celsius into Fahrenheit........
#include <stdio.h>
void T_F(float);
int main()
{
    float celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    
    T_F(celsius);
    }
    
    void T_F(float celsius){
    float fahrenheit;
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f temperature in Celsiuss = %.2f Fahrenheit", celsius, fahrenheit);
}
