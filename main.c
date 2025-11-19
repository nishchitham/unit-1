#include <stdio.h>

int main() {
    int age;
    float height;
    double weight;
    char grade;
    char name[50];

    printf("Enter your age (int): ");
    scanf("%d", &age);

    printf("Enter your height in feet (float): ");
    scanf("%f", &height);

    printf("Enter your weight in kg (double): ");
    scanf("%lf", &weight);

    printf("Enter your grade (char): ");
    scanf(" %c", &grade);

    printf("Enter your name (string): ");
    scanf("%s", name);

    printf("\n--- Input Summary ---\n");
    printf("Age (int): %d\n", age);
    printf("Height (float): %.1f\n", height);
    printf("Weight (double): %.2f\n", weight);
    printf("Grade (char): %c\n", grade);
    printf("Name (string): %s\n", name);

    return 0;
}
