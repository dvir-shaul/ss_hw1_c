#include <stdio.h>
#include "myMath.h"
#include "basicMath.c"
#include "power.c"


int main(){
    
    double result;
    double x;
    printf("please enter a real number");
    scanf("%lf", &x);

    //f(x)=e^x + x^3 -2
    result = sub(add(Exponent((int)x),Power(x,3)),2);
    printf("sum of func f(x)=e^x + x^3 -2 is: %.4lf\n",result);

    //f(x) = 3x + 2X^2
    result = add(mul(x,3), mul(Power(x,2),2));
    printf("sum of func f(x) =3x + 2X^2 is: %.4lf\n",result);

    //f(x) = (4x^3)/5 -2x
    result = sub(div(mul(Power(x,3),4),5),mul(x,2));
    printf("sum of func f(x) = (4x^3)/5 -2x is: %.4lf\n",result);

    return 1;
}