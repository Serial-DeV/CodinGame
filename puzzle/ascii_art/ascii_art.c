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
    int L;
    scanf("%d", &L);
    int H;
    scanf("%d", &H); fgetc(stdin);
    char T[257];
    scanf("%[^\n]", T); fgetc(stdin);

    for (int i = 0; i < H; i++) {   
        char ROW[1025];
        scanf("%[^\n]", ROW); fgetc(stdin);

        char * out = malloc(sizeof(char)*L);

        for(int nb = 0;  nb < strlen(T); nb++)
        {

            int tmp = T[nb];
            if(tmp >= 'a' && tmp <= 'z')
            {
                tmp = tmp - 'a' + 'A';
            }

            if(tmp < 'A' || tmp > 'Z')
            {
                for(int c = 0; c < L; c++)
                {
                    out[c] = ROW[L*26+c]; 
                }
                printf("%s", out);
            }

            else
            {
                for(int c = 0; c < L; c++)
                {
                    out[c] = ROW[L*(tmp-'A')+c]; 
                }
                printf("%s", out);
            }
 
        }

        printf("\n");

    }

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    return 0;
}
