#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float function(float s)
{
    return s*s-2;
}

float Dichotomie(float(*f)(float), float a, float b, int n)
{
    int a1 = a;
    int b1 = b;
    float alpha = 0;
    for (int i = 0; i<n; i++)
    {
        alpha = (a1+b1)/2;
        float image = f(alpha);
        if(image>0)
            b1 = alpha;
        if(image<0)
            a1 = alpha;
    }
    return alpha;
}

float Dichotomie2(float(*f)(float), float a, float b, float eps)
{
    int n = (log((b-a)/eps)/log(2))-1;
    return Dichotomie(float(*f)(float), float a, float b, n);
}
 
int main()
{
    float(*f)(float) = function;
    printf("%f \n", Dichotomie((*f), 1, 3, 3));
    return 0;
}



