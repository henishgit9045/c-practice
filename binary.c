#include <stdio.h>
#define base 2
int main(){
    int num, decimal_num, temp = 1, binary = 0;
    printf("Num: ");
    scanf("%d", &num);
    decimal_num = num;
    while (num > 0)
    {
        binary = binary + temp * (num % 2);
        temp = temp * 10;
        num = num / 2;
    }
    printf("%d", binary);
    
}