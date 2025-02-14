#include <stdio.h>  

void swap(int *a, int *b);      

int main() {                   
    int a ;
    int b ;
    scanf("%d %d",&a,&b);
    swap(&a, &b);          
    printf("a = %d\nb = %d", a, b);  
    return 0;
} 

void swap(int *a, int *b) {
    int temp = *a;  // Store value of a
    *a = *b;        // Assign value of b to a
    *b = temp;      // Assign stored value of a to b
}
