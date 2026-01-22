// Area of Rectangle is = base * height 

#include<stdio.h>
int main () {
    float base;
    printf("Enter base = ");
    scanf("%f",&base);

    float height;
    printf("Enter height : ");
    scanf("%f",&height);

    float area = base * height ;
    printf("Area of Rectangle is = %.3f",area);
    return 0;
}