#include <stdio.h>

int main() {
    // Displaying size of basic data types
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of short: %zu bytes\n", sizeof(short));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of long: %zu bytes\n", sizeof(long));
    printf("Size of long long: %zu bytes\n", sizeof(long long));

    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of long double: %zu bytes\n", sizeof(long double));

    // Pointer sizes (depends on architecture)
    printf("Size of char*: %zu bytes\n", sizeof(char*));
    printf("Size of int*: %zu bytes\n", sizeof(int*));

    // Array size (example: array of 10 ints)
    int arr[10];
    printf("Size of int arr[10]: %zu bytes (10 * sizeof(int))\n", sizeof(arr));

    return 0;
}
