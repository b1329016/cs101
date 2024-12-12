#include <stdio.h>

int main() {
    
    int n, i, j, k;
    n = 7;
    k = 7;
    for(i= 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if( j < k)
              printf(" ");
            else
              printf("%d ",i);
            
        }
        k--;
        printf("\n");
    }
    return 0;
}
