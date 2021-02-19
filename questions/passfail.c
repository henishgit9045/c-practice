#include <stdio.h>

int main(){
    float num;
    printf("Percentage: ");
    scanf("%f", &num);
    if ((num >= 33.00) && (num <= 100)){
        printf("Pass");
    }
    else if ((num >= 0) && (num <= 100))
    {
        printf("Fail");
    }
    else
    {
        printf("Enter Valid Percentage");
    }
    
    

    return 0;
}
