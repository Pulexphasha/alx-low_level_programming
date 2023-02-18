#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description - 'Print last digit of the number stored in the variable n'
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n;
        int lastDigit;
        srand(time(0));
        n = rand() - RAND_MAX / 2;
        lastDigit = n % 10;
        if (last < 5)
        {
        printf("Last digit of %i is %i and is greater than 5\n", n, lastDigit);
        }
        else if (last == 0)
        {
        printf("Last digit of %i is %i and is 0\n", n, lastDigit);
        }
        else if (last > 6)
        {
        printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lastDigit);
        }
        return (0);

}