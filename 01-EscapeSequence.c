#include <stdio.h>

int main(){

    // single line comment

    /*
        multi
        line
        comment
    */

/*
    escape sequence

    \n => newline
    \a => alert
    \b => backspace
    \r => carriage return (moves the cursor to the beginning of the current line)
    \t => horicontal tab
    \v => vertical tab
    \f => formfeed page break
    \" => "
    \' => '
    \\ => \
    \0 => null character
    \nnn => octal value
    \xhh => hexadecimal value
    \uhhhh => universal character name

*/

    // printf("hello\fi\fam\fnot\fbro\fcode");
    // printf("I am Unstoppable\a");
    // printf("Hello1\bWorld");
    // printf("Hello\fWorld");
    printf("Hello\rWorld");

    // char str[] = "Hello\0World";
    // printf("%s",str);

    // printf("Hello \072 World"); // \nnn

    // printf("Hello\x50World");   // \xhh

    // printf("Hello\u03A9World"); // \uhhhh

    printf("\n");
    
    return 0;

}