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
    char MESSAGE[101];
    scanf("%[^\n]", MESSAGE);

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");


    int len = strlen(MESSAGE);

    int size = len*7;

    int* out_tmp = malloc(sizeof(int)*size);

    for(int n = 0; n < len; n++){

        int tab[7] = {55};
        int cpt = 6;
        int tmp = MESSAGE[n];
        while(tmp > 0){
            if(tmp%2){
                tab[cpt] = 1;
                out_tmp[7*n+cpt] = 1;
            }
            else{
                tab[cpt] = 0;
                out_tmp[7*n+cpt] = 0;
            }
            tmp = tmp/2;
            cpt--;
        }
        
    }


    char curr_char = -1;
    for(int i = 0; i < size; i++){
        if(curr_char != out_tmp[i]){
            if(i)
                printf(" ");
            if(out_tmp[i] == 0)
                printf("00 0");
            else
                printf("0 0");
            curr_char = out_tmp[i];
        }
        else{
            printf("0");
        }
    }

    return 0;
}
