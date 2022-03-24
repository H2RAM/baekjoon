#include <stdio.h>

int main(void){
    int a;
    int b;
    scanf("%d %d", &a, &b);
    int b3 = b;
    int b1 = b3 % 10;
    b3 /= 10;
    int b2 = b3 % 10;
    b3 /= 10;
    printf("%d\n", a*b1);
    printf("%d\n", a*b2);
    printf("%d\n", a*b3);
    printf("%d\n", a*b);
    
}
