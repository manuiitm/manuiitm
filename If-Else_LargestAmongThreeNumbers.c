#include <stdio.h>

int main() {

    int a;
    int b;
    int c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a>=b && a>=c){
        printf("The largest number is : %d", a);
      }
       else if(b>=c && b>=a){
           printf("The largest number is : %d", b);
       }
    else{
        printf("The largest number is : %d", c);
    }
    
    
    return 0;
}