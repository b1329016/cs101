#include <stdio.h>

int main() {
   int i=61;
   if(i<30){
       printf("免費");
   }
   else if(i>=30){
       printf("30元");
   }
   else{
       if(i%30){
           int h=((i/30)+1)*30;
           printf("%d元",h);
       }
       else{
           printf("%d元",i);
   }
   }
    return 0;
}
