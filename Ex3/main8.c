#include <stdio.h>

int main() {
    int x=-1;
    int y=2;
    int z=3;
    int n,j;
    if(x<0){
        n=(x*-1)*100+y*10+z;
        printf("%d",n*-1);
    }
    else{
        j=x*100+y*10+z;
        printf("%d",j);
    }
        
    return 0;
}
