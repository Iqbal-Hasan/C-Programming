#include <stdio.h>
#include <string.h>

int main(){
    char name[25];
    int age;

printf("Enter your name : ");
// scanf("%s",name);
fgets(name, 25, stdin);
name[strlen(name)-1] = '\0';

    printf("how old are you ? : ");
    scanf("%d",&age);
    printf("Your name is : %s \nYou are %d years old.",name,age);


    printf("\n");
    return 0;
}