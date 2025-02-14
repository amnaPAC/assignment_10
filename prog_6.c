#include <stdio.h>

int main() {
    float marks1, marks2, marks3, average;
    
    printf("Enter marks for three subjects: ");
    scanf("%f %f %f", &marks1, &marks2, &marks3);
    
    average = (marks1 + marks2 + marks3) / 3;
    
    printf("Average Marks: %.2f\n", average);
    
    if (average >= 90) {
        printf("Grade: A\n");
    } else if (average >= 80) {
        printf("Grade: B\n");
    } else if (average >= 70) {
        printf("Grade: C\n");
    } else if (average >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }
    
    return 0;
}
