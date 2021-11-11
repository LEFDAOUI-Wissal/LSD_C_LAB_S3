#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float function(float s)
{
    return s*s-2;
}

float derevative(float s)
{
    return 2*s;
}

float Newton(float (*f)(float), float (*g)(float), float a0, int n)
{
float a = a0;
    for(int i=0; i<n; i++)
    {
        float a =-(f(a)/g(a));
    }
    return a;
}

int main()
{
    float(*f)(float) = function;
    float(*g)(float) = derevative;
    printf("%f \n", Newton((*f),(*g), -10, 100));
    return 0;
}
