#include <stdio.h>

int main(){
    printf("\n");


    char grade;
    printf("enter your grade : ");
    scanf("%c",&grade);

    switch (grade)
    {
    case 'A':
        printf("You are perfect");
        break;
    case 'B':
        printf("You are good");
        break;
    case 'C':
        printf("You are little good");
        break;
    case 'F':
        printf("Never give up");
        break;
    
    default:
    printf("please enter valid grade");
        break;
    }

    printf("\n");
    return 0;
}