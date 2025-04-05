#include <stdio.h>
int main()
{
    int arr[5] = {5, 10, 15, 20, 25};
    int even_sum = 0, odd_sum = 0, result;
    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
        {
            even_sum = even_sum + arr[i];
        }
        else
        {
            if (i % 2 != 0)
            {
                odd_sum = odd_sum + arr[i];
            }
        }
    }
    printf("the even indice sum is %d and odd indice sum is %d", even_sum, odd_sum);
    return 0;
}
