#include <stdio.h>
#include <math.h>

int main()
{
    double PI = 4.00000;
    int a = 3;
    for (int i = 0; i < 1000000; i++)
    {
        if(((a/2)%2)==1)
        {
            PI = PI - (4.00000f / a);
        }
        else
        {
            PI = PI + (4.00000f / a);
        }
        if(fabs(PI-3.14159)<0.000005 && (PI-3.14159)>0)
        {
            break;
        }
        a += 2;
    }
    printf("pi:%.5f minimum x:%d", PI, a);
    return 0;
}
