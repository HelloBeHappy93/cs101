#include <stdio.h>

int main()
{
    for (int i = 1, j = 1; i <= 9;)
    {
        printf("%d*%d=%d\t", i, j, i * j);
        if(j==9)
        {
            i++;
            j = 0;
            printf("\n");
        }
        j++;
    }
    return 0;
}
