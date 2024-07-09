#include<stdio.h>

int main(){
    float base1, base2, height, area;

    printf("Enter the lengths of two bases and height :");
    scanf("%f %f %f", &base1, &base2, &height);

    area = 0.5 * (base1 + base2) * height;
  
    printf("Area of the trapezoid : %.2f/n", area);
    return 0;
}
