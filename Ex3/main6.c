#include <stdio.h>

int main() {
    int i=1999;
    int h,j;
    if(i<=1500){
        printf("70元");
    }
    else{
        int n=i-1500;
        if(n%100){
            h=((n/100)+1)*10;
            printf("%d",h+70);
        }
        else{
            j=(n/100)*10;
            printf("%d",j+70);
        }
        
    }
    
    return 0;
}
