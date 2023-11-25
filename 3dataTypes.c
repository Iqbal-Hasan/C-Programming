#include <stdio.h>
#include <stdbool.h>

int main(){

    // data types

    char star = '*';           // 1 bytes single character (%c)
    char name[] = "Your Name"; // 1 bytes array of character (%s)

    float pi = 3.141592;         // 4 bytes - 32 bits of precision (%f)
    double d = 3.14159265389793; // 8 bytes - 64 bits of precision (%lf)

    bool e = true; // 1 bytes (true - 1 or false - 0) (%d)

    char f = 120;          // 1 bytes (-128 to +127) (%d or %c)
    unsigned char g = 255; // 1 bytes (0 to +255) (%d or %c)

    // unsigned => means it can only store non-negative numbers

    short int h = 32767;          // 2 bytes (-32,768 to +32,767) (%d)
    unsigned short int i = 65535; // 2 bytes (0 to +65,535) (%d)

    int j = 2147483647;          // 4 bytes (2,147,483,648 to +2,147,483,647) (%d)
    unsigned int k = 4294967295; // 4 bytes (0 to +4,294,967,265) (%u)

    long long int l = 922337203854775807;          // 8 bytes (-9 quintillion to +9 quintillion) (%lld)
    unsigned long long int m = 1822337203854775807 // 8 bytes (0 to +18 quintillion) (%llu)

    printf("\n");
    return 0;
}