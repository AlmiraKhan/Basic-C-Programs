#include<stdio.h>
int main()
{
    float r,A,P;
    const float pi=3.14;
    printf("Enter the radius of the circle:  ");
    scanf("%f",&r);
    P=2*pi*r;
    A=pi*r*r;
    printf("Area is %f sq.unit and Perimeter is %f units",A,P);
    return 0;
}