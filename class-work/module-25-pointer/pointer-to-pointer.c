#include <stdio.h>

int main() {
    int num = 100;
    int* ptr;
    int** pptr;
    int*** ppptr;


    ptr = &num;  // Store the address of num in ptr
    pptr = &ptr; // Store the address of ptr in pptr
    ppptr = &pptr; //Store the address of pptr in ppptr;

    printf("Value of num: %d\n", num);
    printf("Memory location available at *ptr: %p\n", ptr);
    printf("Memory location available at **pptr: %p\n", pptr);
    printf("Memory location available at ***ppptr: %p\n", ppptr);
    printf("Value available at *ptr: %d\n", *ptr);
    printf("Value available at **pptr: %d\n", **pptr);
    printf("Value available at ***pptr: %d\n", ***ppptr);

    return 0;
}
