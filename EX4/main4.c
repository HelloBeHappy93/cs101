#include <stdio.h>

int main()
{
    int number,ones,thousands,changeN;
    number = 12345;
    ones = number % 10;
    thousands = (number / 1000) % 10;
    changeN = number - (thousands * 1000 + ones) + (ones * 1000 + thousands);
    printf("i = %i\n", changeN);
    return 0;
}
