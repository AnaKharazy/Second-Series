#include <stdio.h>
#include<math.h>
#include <utilapiset.h>

int main() {
    int number1,number2,number3,number4,number5,multiply,devision,total;
    printf("enter the numbers:");
    scanf("%d %d %d %d %d",&number1,&number2,&number3,&number4,&number5);
    multiply=number1*number2*number3;
    Beep(750,800);
    printf("\a*\nmultiply these 3 numbers:%d\n*\a",multiply);
    Beep(750,800);
    devision=number1/number2;
    printf("\a\a\a&&&the result of deviding 2 numbers:%d\n\a\a\a$$$",devision);
    Beep(750,800);
    total=number1+number2+number3+number4+number5;
    printf("#\t\t\t#\t\t\t#\t\t\t#\t\t\t#\nthe sum of five numbers:%d\n@\t\t\t@\t\t\t@\t\t\t@\t\t\t@",total);
    return 0;
    }