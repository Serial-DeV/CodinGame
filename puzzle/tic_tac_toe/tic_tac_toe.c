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
    int win = 0;
    char line[3][4];

    for(int n = 0; n < 3; n++){
        scanf("%[^\n]", line[n]); fgetc(stdin);
    }


    int cpt_d1 = 0;
    int cpt_d2 = 0;

    for(int n = 0; n < 3; n++){
        if(win)
            break;
            
        int cpt_l = 0;
        int cpt_c = 0;

        // lines
        for(int n2 = 0; n2 < 3; n2++){
            if(line[n][n2] == 'O'){
                cpt_l++;
            }
        }

        if(cpt_l == 2){
            for(int n2 = 0; n2 < 3; n2++){
                if(line[n][n2] == '.'){
                    win = 1;
                    line[n][n2] = 'O';
                    break;
                }
            }
        }

        // columns
        for(int n2 = 0; n2 < 3; n2++){
            if(line[n2][n] == 'O'){
                cpt_c++;
            }
        }

        if(cpt_c == 2){
            for(int n2 = 0; n2 < 3; n2++){
                if(line[n2][n] == '.'){
                    line[n2][n] = 'O';
                    win = 1;
                    break;
                }
            }
        }

        // diagonal 1
        if(line[n][n] == 'O')
            cpt_d1++;
        if(cpt_d1 == 2){
            for(int nb = 0; nb < 3; nb++){
                if(line[nb][nb] == '.'){
                    line[nb][nb] = 'O';
                    win = 1;
                    break;
                }
            }
        }

        // diagonal 2
        if(line[n][2-n] == 'O')
            cpt_d2++;
        if(cpt_d2 == 2){
            for(int nb = 0; nb < 3; nb++){
                if(line[nb][2-nb] == '.'){
                    line[nb][2-nb] = 'O';
                    win = 1;
                    break;
                }

            }
        }
            
    }


    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    
    if (win){
        printf("%s\n",line[0]);
        printf("%s\n",line[1]);
        printf("%s\n",line[2]);
    }
    else
        printf("false\n");

    return 0;
}
