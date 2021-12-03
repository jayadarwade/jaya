//1Area and Circumference of a Circle
#include<stdio.h>
	void circle(float);
	void circle(float c){
	float area ;
	 area =3.14*c*c;
	 printf("area of circle is %f:",area);
} 
//main function
int main ()
{
	float c;
	  printf("enter any number:\n");
	   scanf("%f",&c);
	    circle(c);
}
