#include <stdio.h>

// Function to calculate total marks and percentage
void calculateMarks(float marks[], int numSubjects, float *totalMarks, float *percentage) {
    *totalMarks = 0;
    for (int i = 0; i < numSubjects; i++) {
        *totalMarks += marks[i];
    }
    *percentage = (*totalMarks / (numSubjects * 100)) * 100;
}

// Function to determine grade based on percentage
char determineGrade(float percentage) {
    if (percentage >= 90) {
        return 'A';
    } else if (percentage >= 80) {
        return 'B';
    } else if (percentage >= 70) {
        return 'C';
    } else if (percentage >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    char name[50];
    float marks[5];
    int numSubjects = 5;
    float totalMarks, percentage;
    char grade;

    printf("Enter student's name: ");
    scanf("%s", name);

    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < numSubjects; i++) {
        printf("Enter marks for Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
    }

    // Calculate total marks and percentage
    calculateMarks(marks, numSubjects, &totalMarks, &percentage);

    // Determine grade
    grade = determineGrade(percentage);

    // Print mark sheet
    printf("\n-------- Mark Sheet --------\n");
    printf("Student Name: %s\n", name);
    printf("Marks Obtained:\n");
    for (int i = 0; i < numSubjects; i++) {
        printf("Subject %d: %.2f\n", i + 1, marks[i]);
    }
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
