#include <stdio.h>

int main(){

    // variables => that can store something

    int x;   // declaration
    x = 369; // initialization

    int y = 12; // declaration and initialization

    int age = 18;             // integer (%d)
    float gpa = 3.94;         // floating point number (%f)
    char grade = 'c';         // single character (%c)
    char name[] = "Bro Code"; // array of character (%s)

    printf("Hello,\nMy name is %s.\nI am %d years old.\nMy gpa is %f.\nMy grade is %c.\n",name,age,gpa,grade);

    printf("\n");
    return 0;
}