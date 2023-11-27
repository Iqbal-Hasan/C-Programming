#include <stdio.h>

int main(){
    
    // arithmetic operator

    // + (addition)
    // - (subtraction)
    // * (multiplication)
    // / (division)
    // % (modulus)
    // ++ (increment)
    // -- (decrement)


    // short hand
    // x = x + 1;
    // x+=1 or x++

    // x = x - 1;
    // x-=1 or x--

    // x*=5 - (x = x * 5)
    // x/=5
    // x%=5

    int x = 23;
    int y = 7;

    printf("%d + %d = %d \n",x,y,x+y);
    printf("%d - %d = %d \n",x,y,x-y);
    printf("%d * %d = %d \n",x,y,x*y);
    printf("%d / %d = %f \n",x,y,x/ (float) y);
    printf("%d %% %d = %d \n",x,y,x%y);
    printf("++23 = %d \n",++x);
    printf("--7 = %d \n",--y);

    printf("\n");
    return 0;
}