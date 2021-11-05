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
    int N;
    scanf("%d", &N);

    int *list = malloc(sizeof(int)*N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &(list[i]));
    }
    int min_diff = abs(list[0] - list[1]);
    int tmp1, tmp2, diff;

    for(int i = 0; i < N-1; i++){
        tmp1 = list[i];
        for(int j = i+1; j < N; j++){
            if(i != j){
                tmp2 = list[j];
                diff = abs(tmp1 - tmp2);
                if(diff < min_diff)
                    min_diff = diff;
                else if(tmp1 > tmp2)
                    break;
            }
        }
    }

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    printf("%d\n", min_diff);

    return 0;
}
