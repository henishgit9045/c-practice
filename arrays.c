#include <stdio.h>

int main(){
    int a = 1;
    lineprint(a, ++a, a++);
    return 0;
}

void lineprint(int a, int b, int c){
    printf("\n%d", a);
    printf("\n%d", b);
    printf("\n%d", c);
}
