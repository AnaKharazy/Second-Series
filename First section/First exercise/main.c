#include <stdio.h>
#include <math.h>
int main() {
 float begin,final,price;
    printf("enter the begin of kilometers:");
    scanf("%fl",&begin);
    printf("enter the final of kilometers:");
    scanf("%fl",&final);
    price=final-begin;
    price=price*1.5;
    printf("%2.f$",price);
    return 0;
}
