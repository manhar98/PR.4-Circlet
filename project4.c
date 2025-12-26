#include <stdio.h>

int main(){
    printf("Q.1 Develop a program that prints the given Right half triangle pattern using a nested for loop. \n");
    int i, j;

    for (i = 1; i <= 5; i++){
        for (j = 1; j <= i; j++){
            printf("%d ",40 + j);
        }
        printf("\n");
    }



    printf("Q.2 Develop a program that prints the given Floyd's triangle pattern using a nested for loop. \n");
    
    int a, b;

    for (a = 1; a <= 5; a++){
        for(b = 1; b < a; b++){
            printf("%d ",11 + b);
        }
        printf("\n");
    }


    printf("Q.3 Develop a program that prints the given Left half triangle pattern using a nested for loop. \n");
    int c, d, space;

    for (c = 5; c >= 1; c--){
        for(space = 1; space < c; space++){
            printf("  ");
        }
        for(d = c; d <= 5; d++){
            printf("%d ", d);
        }
        printf("\n");
    }




    printf("Q.4 Develop a program that prints the given Inverted Left half triangle pattern using a nested for loop. \n");
    int y,z, space1;
    for (y = 5; y >= 1; y--){
        for(space1 = 5; space1 < y; space1--){
            printf("  ");
        }
        for(z = 1; z <= y; z++){
            printf("%d ", z);
        }
        printf("\n");
    }



    printf("Q.5 Develop a program that prints the given Full Pyramid pattern using a nested for loop. \n");

    int e, f, space2;

    for (e = 5; e >= 1; e--){
        for(space2 = 1; space2 < e; space2++){
            printf("  ");
        }
        for(f = e; f <= 5; f++){
            printf("%d ", f);
        }
        for(f = 4; f >= e; f--){
            printf("%d ", f);
        }
        printf("\n");
    }




    printf("Q.6 Develop a program that prints the given Custom numeric pattern using a nested for loop. \n");
    
        int g, h, space3;
    
        for(g = 1; g <= 5; g++){
            for (h = 1; h <= g; h++){
                printf("%d ", h);
            }
            for (space3 = 4; space3 >= g; space3--){
                printf("    ");
            }
            for (h = g; h >= 1; h--){
                printf("%d ",h);
            }
            printf("\n");
            
        }




        printf("Q.7 Develop a program that prints the given Custom alphabetic pattern using a nested for loop.\n");
        int k, l;
        for(k = 1; k <= 5; k++){
            for(l = 1; l <= 5; l++){
                if(k == 2 && l >= 2 && l <= 4 || k == 4 && l >= 2 && l <= 5 || k == 5 && l >= 2 && l <= 5){
                    printf("  ");
                }else{
                    printf("* ");
                    
                }
            }
            printf("\n");
        }
}