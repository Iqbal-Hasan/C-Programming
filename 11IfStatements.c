#include <stdio.h>

int main(){

    printf("\n");

    int age;

    printf("Enter your age : ");
    scanf("%d", &age);

    if (age == 0){
        printf("your age can be zero"); // this doesn't work with string
    }else if(age > 18){
        printf("you are bigger than 18");
    }else if(age < 18 && age > 0){
        printf("you are less than 18");
    }else{
    printf("you are messing with the program go away"); 
    }
    


    printf("\n");
    return 0;
}