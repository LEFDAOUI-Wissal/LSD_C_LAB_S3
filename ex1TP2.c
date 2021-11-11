#include <stdio.h>
#include <stdlib.h>

float** creation(int n)
{
    float** M = (float**)malloc(sizeof(float*)*n);
    for (int i=0; i<n; i++)
        {
            M[i] = (float*)malloc(sizeof(float)*n);
            for (int j=0; j<n; j++)
                {
                    scanf("%f", &M[i][j]);
                }
        }
    return M;
}

void printage(int n, float** M)
{
    for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
                {
                    printf("%f ", M[i][j]);
                }
            printf("\n");
        }
}


float** sum_m(float** A, float** B, int n)
{
    float** R = (float**)malloc(sizeof(float*)*n);
    for (int i=0; i<n; i++)
        {
            R[i] = (float*)malloc(sizeof(float)*n);
            for (int j=0; j<n; j++)
                {
                    R[i][j] = A[i][j] + B [i][j];
                }
        }
    return R;
}

float** mult_m(float** A, float** B, int n)
{
    float** R = (float**)malloc(sizeof(float*)*n);
    for (int i=0; i<n; i++)
        {
            R[i] = (float*)malloc(sizeof(float)*n);
            for (int j=0; j<n; j++)
                {
                    R[i][j] = 0;
                    for (int x=0; x<n; x++)
                    {
                        R[i][j] = R[i][j] + A[i][x] * B[x][j];
                    }
                }
        }
    return R;
}

float** trans_m(float** A, int n)
{
    float** R = (float**)malloc(sizeof(float*)*n);
    for (int i=0; i<n; i++)
        {
            R[i] = (float*)malloc(sizeof(float)*n);
            for (int j=0; j<n; j++)
                {
                    R[i][j] = A[j][i];
                }
        }
    return R;
}

float** dia_m(float** A, int n)
{
    float** R = (float**)malloc(sizeof(float*)*2); 
    R[0] = (float*)malloc(sizeof(float)*n);
    R[1] = (float*)malloc(sizeof(float)*n);
    for(int j = 0; j<n; j++)
    {
        R[0][j] = A[j][j];
        R[1][j] = A[j][n-j-1];
    }
    return R;
}

int main()
{
    float** A = creation(3);
    // float** B = creation(2);
    float** M = dia_m(A, 3);
    printage(3, M);
    return 0;
}