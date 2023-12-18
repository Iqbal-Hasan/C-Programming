#include <stdio.h>

int main()
{
    // circumference and area of circle random random
    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("Enter your circle radius : ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("Circumference : %lf\n", circumference);

    printf("\n");
    return 0;
}