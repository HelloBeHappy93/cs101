#include <stdio.h>

int main()
{
    int n = 7;
    for (int i = 1; i < n + 1; i++)
    {
        int a = i;
        for (int j = 0; j < n; j++)
        {
            if(a!=n)
            {
                printf(" ");
                a++;
            }
            else
            {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
    return 0;
}
