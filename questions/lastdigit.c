#include <stdio.h>
#define ma 300

 
int main(){
    if (1900 % 4 == 0){
        if (1900 % 100 == 0){
            if (1900 % 400 == 0)
                printf("1900 Year is leap year.");
            else
                printf("1900 is not a leap year.");
        }
        else
                printf("1900 is not a leap year.");
    }
    else
                printf("1900 is not a leap year.");
}
