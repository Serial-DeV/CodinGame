#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Don't let the machines win. You are humanity's last hope...
 **/

int main()
{
    // the number of cells on the X axis
    int width;
    scanf("%d", &width);
    // the number of cells on the Y axis
    int height;
    scanf("%d", &height); fgetc(stdin);


    char tab[32][32];
    for (int i = 0; i < height; i++) {
        // width characters, each either 0 or .
        scanf("%[^\n]", tab[i]); fgetc(stdin);

    }

    for (int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++){
            if(tab[i][j] == '0'){
                printf("%d %d ", j, i );
                int pass = 0;
                for(int n = j+1; n < width; n++){
                    if(tab[i][n] == '0'){
                        printf("%d %d ", n, i);
                        pass = 1;
                        break;
                    }
                }

                if(!pass)
                    printf("-1 -1 ");

                if(i < height){
                    int pass = 0;
                    for(int n = i+1; n < height; n++){
                        if(tab[n][j] == '0'){
                            printf("%d %d ", j, n);
                            pass = 1;
                            break;
                        }
                    }
                    if(!pass)
                        printf("-1 -1 ");
                } 

                printf("\n");
            }
        }
    }

    // Write an action using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");


    // Three coordinates: a node, its right neighbor, its bottom neighbor

    return 0;
}
