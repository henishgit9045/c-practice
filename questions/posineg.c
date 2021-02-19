#include <stdio.h>

int main(){
    float num;
    printf("Num: ");
    scanf("%f", &num);
    if (num > 0){
        printf("Num is positive.");
    }
    else if (num < 0)
    {
        printf("Num is negative.");
    }
    else
    {
        printf("Num is ZERO."); 
    }
    
    
    

    return 0;
}
