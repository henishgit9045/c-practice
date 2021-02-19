#include <stdio.h>

int main(){
    int rows, cols;

    for (rows = 0; rows < 5; ++rows){
        for (cols = 0; cols < rows; cols++){
            printf(" ");
        }

        for (cols = 5; cols > rows; cols--){
            printf("* ");
        }

        for (cols = 0; cols < rows; cols++){
            printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}