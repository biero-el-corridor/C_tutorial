
#include <stdio.h>

int main(){

    int a = 5; 
    int *PointerToA;

    PointerToA = &a;

    printf("%d",*PointerToA);
    return 0; 
}