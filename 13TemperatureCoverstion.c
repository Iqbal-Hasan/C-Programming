#include <stdio.h>
#include <ctype.h>

int main(){
    printf("\n");

    // temp = (temp * 9/5)+32
    // temp = ((temp -32)*5)/9

    char unit;
    float temp;

    printf("Temperature in (F) or (C) : ");
    scanf("%c",&unit);

    unit = toupper(unit);

    if (unit == 'C')
    {
        printf("Enter temperature in (C) : ");
        scanf("%f",&temp);

        temp = (temp * 9 / 5) + 32;
        printf("Temperature is (F) : %.2f", temp);
    }
    else if(unit == 'F')
    {
        printf("Enter temperature in (F) : ");
        scanf("%f",&temp);

        temp = ((temp - 32) * 5) / 9;
        printf("Temperature is (C) : %.2f", temp);
    }
    else
    {
        printf("give a valid unit");
    }
    

    printf("\n");
    return 0;
}