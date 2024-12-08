#include <stdio.h>

int main() {
    int num = 12345;
    int num1;
    
    int thousand = num / 10000; 
    int unit = num % 10; 
    
    int middle = (num % 10000) / 10;
    
    num1 = unit * 10000 + middle * 10 + thousand;
    
    printf("%d\n", num1);
    
    return 0;
}
