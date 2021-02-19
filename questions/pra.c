// Write a program to check whether entered number is prime or not.
#include <stdio.h>

int main(){
    int num, i, k = 3;
    printf("Num: ");
    scanf("%d", &num);
    for (i = 2; i < num; i++){
        if (num % i == 0){
            printf("Num is Not Prime.");
            break;
        }
        k++;
    }
    
    if (i == num)
        printf("Num is Prime.");

    return 0;
}
