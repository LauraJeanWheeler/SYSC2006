/* SYSC 2006 Lab 10. */
#include <stdio.h>
#include <math.h>

/* Return x raised to the power n for n >= 0. */
double power(double x, int n)
{
    if (n == 0)
    {
        return 1;
    }

    return (x * power(x, n - 1));
}

/* Return the number of digits in integer n, n >= 0. */
int num_digits(int n)
{
    if (n < 10)
    {
        return 1;
    }

    return 1 + num_digits(n / 10);
}

/* Return the count of the number of times target occurs in the first 
 * n elements of array a.
 */
int occurrences(int a[], int n, int target)
{
    if (n == 1) 
        return a[n - 1] == target;
    
    return (a[n - 1] == target) + occurrences(a, n - 1, target);
}

/* Challenge exercise: return x raised to the power n for n >= 0. */
double power2(double x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n % 2 == 0)
    {
        return power2(x, n / 2) * power2(x, n / 2);
    }
    // n is odd
    return x * power2(x, n / 2) * power2(x, n / 2);
}
