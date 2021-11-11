#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float Dichotomie(float(*f)(float), float a, float b, int n);
float Dichotomie2(float(*f)(float), float a, float b, float eps);
float Newton(float (*f)(float), float (*g)(float), float a0, int n);
