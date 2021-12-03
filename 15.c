//8Converting Temperature Celsius into Fahrenheit
#include <stdio.h>
void fahrenheit( float);
int main()
{
    float celsius;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
     fahrenheit(celsius);
    }
    //Defination
    void fahrenheit(float celsius){
    float fahrenheit;
    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);

}
