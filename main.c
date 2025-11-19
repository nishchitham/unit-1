#include <stdio.h>
int main() {
    // Integer data type
    int age = 25;

    // Floating-point data types
    float height = 5.9f;
    double weight = 70.5;

    // Character data type
    char grade = 'A';

    // String (array of characters)
    char name[20] = "Alice";

    // Displaying the values
    printf("Age (int): %d\n", age);
    printf("Height (float): %.1f\n", height);
    printf("Weight (double): %.2f\n", weight);
    printf("Grade (char): %c\n", grade);
    printf("Name (string): %s\n", name);

    return 0;
}
