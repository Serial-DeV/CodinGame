#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    // the number of temperatures to analyse
    int n;
    scanf("%d", &n);

    int out = 0;

    for (int i = 0; i < n; i++) {
        // a temperature expressed as an integer ranging from -273 to 5526
        int t;
        scanf("%d", &t);

        if(!i)
        {
            out = t;
        }

        else
        {
            if(t*t < out*out)
            {
                out = t;
            }

            else if(t*t == out*out && t > 0)
            {
                out = t;
            }
        }

    }

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    printf("%d\n", out);

    return 0;
}
