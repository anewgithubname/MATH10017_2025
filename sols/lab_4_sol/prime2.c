#include <stdio.h>

void main()
{
    for (int i = 1; i <= 100; i++)
    {
        int numfactor = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                numfactor = numfactor + 1;
                if (numfactor > 2)
                {
                    break; // stop the current loop!
                    // check i+1!
                }
            }
        }
        if (numfactor == 2)
        {
            printf("%d \n", i);
        }
    }
}