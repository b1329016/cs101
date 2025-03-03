#include <stdio.h>

int main() {
    
    int x, y;
    for( y = 1, x = 1; y <= 9; x++)
    {
        printf("%d*%d=%d\t ",y,x,y*x);
        if( x == 9)
        {
            x = 0;
            y++;
            printf("\n");
        }    
    }
    
    return 0;
}
