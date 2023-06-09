#include <stdio.h>
#include <math.h>
#define func(x) ((x)*(x)*(x)*(x) - 11*(x) +8)
#define EPS 1e-6


int main()
{

    double a = 1, b = 2, c;
    int itr = 0;

    while (1)
    {
        c = (a * func(b) - b * func(a)) / (func(b) - func(a));
        itr++;

        if (fabs(func(c)) <= EPS)
        {
            printf("Root (False Position Method) is: %0.9lf", c);
            printf("\nIteration: %d\n", itr);
            break;
        }

        else if (func(a) * func(c) < 0)
        {
            b = c;
        }

        else
        {
            a = c;
        }

    }


}
