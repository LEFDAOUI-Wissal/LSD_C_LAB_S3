#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "tp2.h"

float function(float s)
{
    return s*s*s-s-3;
}

void forn(float(*f)(float), , float b, int n)
{
    
}

int main()
{
    float(*f)(float) = function;
    float a = 1;
    float b = 3;
    int n = 3;
    float* s = (float*)malloc(sizeof(float)*(n+1));
    for( int i=0; i<=n; i++)
    {
        s[i]= Dichotomie((*f), a, b, i);
        printf("%f \n", s[i]);
    }
    FILE *gnuplot = popen("gnuplot", "w");
    if (!gnuplot)
    {
        perror("popen");
        exit(EXIT_FAILURE);
    }

    fprintf(gnuplot, "plot '-' u 1:2 t 'alphaN' w lp\n");
    for (int i = 0; i < 10; ++i)
    {
        fprintf(gnuplot, "%d %lf\n", i, y[i]);
    }
    fprintf(gnuplot, "e\n");
    fprintf(stdout, "Click Ctrl+d to quit...\n");
    fflush(gnuplot);
    getchar();

    pclose(gnuplot);
    exit(EXIT_SUCCESS);
    return 0;
}