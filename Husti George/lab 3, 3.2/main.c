#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double ResultSin, ResultCosin, ResultTan;
    double Angle, rad, pi=3.14;
    rad=pi/180;
    scanf("%lf",&Angle);
    printf("The Angle is equal to %lf degrees\nResult of sin:", Angle);
    ResultSin=sin(Angle*rad);
    ResultCosin=cos(Angle*rad);
    ResultTan=tan(Angle*rad);
    printf("%lf\nResult of cosin:",ResultSin);
    printf("%lf\nResult of tan:",ResultCosin);
    printf("%lf",ResultTan);



    return 0;
}
