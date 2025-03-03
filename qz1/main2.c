#include <stdio.h>

int main() {
    int num=12345;
    int first,last;

    last = num % 10;

    first = num;
    while (first >= 10) {
        first /= 10;
    }
    printf("first%d+last%d=%d",first,last,first+last);
    return 0;
    
}
