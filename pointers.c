/* File : pointers.c */
#include <stdio.h>

int main() {
    int c = 42;
    int *ptr = &c;
    printf (" %d \n %d \n" , c , *ptr );
    printf (" %p \n %p \n %p \n" , &c , ptr , &ptr );
    int *ipointer;
    char *cpointer;
    double *dpointer;
    printf("%ld %ld %ld\n", sizeof(ipointer), sizeof(cpointer), sizeof(dpointer));
    
    int *ptr1, arr[] = {10, 20, 30};
    ptr = &arr[0];
    printf("mem[%p], %d\n", ptr1, *ptr1);
    ptr += 2;
    printf("mem[%p], %d\n", ptr1, *ptr1);
    
    return 0;
}