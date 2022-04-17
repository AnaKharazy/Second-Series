#include <stdio.h>
#include <math.h>
int main() {
    float hour, minute,finalT,formula;
    printf("enter the hour: ");
    scanf("%fl", &hour);
    printf("enter the minute:");
    scanf("%fl", &minute);
    hour=hour*60;
    finalT=hour+minute;
    finalT=finalT/60;
    formula=((4* powf(finalT,2))/(finalT+2))-20;
    printf("%3.fC",formula);
    return 0;
}