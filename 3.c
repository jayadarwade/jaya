//Area of Triangle....?
#include<stdio.h>  
void area_triangle(float,float);
//defination
  void area_triangle(float b,float h){     
                        float area;  
                
                 area = (b*h) / 2 ;  
      printf("\n Area of Triangle is: %f",area);  
      }  
//run
        int main()
        {
        float b,h,area;
        printf("enter a b and h\n");
        scanf("%f%f",&b,&h);
        area_triangle(b,h);
        }
