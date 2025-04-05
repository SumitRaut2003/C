#include <stdio.h>
int fibonaci(int n)
{

    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
        return fibonaci(n - 1) + fibonaci(n - 2);
}
int main()
{
    int i, j;
    int n;
    printf("enter number of terms ");
    scanf("%d", &n);
    printf("the first %d terms of fibonaci series : \n", n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d", fibonaci(i));
    }
    printf("/n");
    return 0;
}
