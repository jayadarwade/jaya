//12Area of a Circumference ....
//12Area of a Circle
#include<stdio.h>
	void Circumference (float);
	void Circumference(float c){
	float area ;
	 area =2*3.14*c;
	 printf("area of circle is %f:",area);
} 
//main function
int main ()
{
	float c;
	  printf("enter any radius:\n");
	   scanf("%f",&c);
	   Circumference(c);
}
