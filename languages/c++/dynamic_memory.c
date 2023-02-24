#include <stdio.h>
#include <stdlib.h>

int main() {
    // allocation
    // void* malloc( size ) -> so we need to cast in specific data type.
    int *p = (int *) malloc(sizeof(int));
    *p = 5;

    printf("%d\n", *p);
    
    // de-allocation
    free(p);

    return 0;
}