#include <stdio.h>
int main()
{
    int m, n, p, q, a, b, c, k, matc;
    int i, j;
    int matrixa[10][10];
    int matrixb[10][10];
    int matrixc[10][10];
    printf("enter number of rows=m in 1st matrix ");
    scanf("%d", &m);
    printf("enter number of columns=n in 1st matrix ");
    scanf("%d", &n);
    printf("enter number of rows=p in 2nd matrix ");
    scanf("%d", &p);
    printf("enter number of columns=q in 2nd matrix ");
    scanf("%d", &q);
    if (n != p)
    {
        printf("enetr valid matrix for multiplication ");
    }

    else
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &matrixa[i][j]);
            }
        }
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                scanf("%d", &matrixb[i][j]);
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                matrixc[i][j] = 0;
                for (k = 0; k < p; k++)
                {
                    matrixc[i][j] += matrixa[i][j] * matrixb[i][j];
                }
            }
        }
        printf("the matrix multiplication is \n");

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {

                printf("%d \t", matrixc[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
