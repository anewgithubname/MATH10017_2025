#include <stdio.h>

void main()
{
    for (int i = 1; i <= 100; i++)
    {
        int numfactor = 1;
        for (int j = 1; j <= i / 2; j++) // no need to check j > i/2 (why?)
        {
            if (i % j == 0)
            {
                numfactor = numfactor + 1;
                if (numfactor > 2)
                {
                    break;
                }
            }
        }
        if (numfactor == 2)
        {
            printf("%d \n", i);
        }
    }
}