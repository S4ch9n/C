#include <stdio.h>
char calculate_grade(float average); // Function declaration
// Main function
int main() {
    int num_subjects; // To store the number of subjects
    float marks[5], sum = 0.0, average; 
    char grade; // To store the grade based on the average
    // enter the number of subjects
    printf("Enter the number of subjects (3-5): ");
    scanf("%d", &num_subjects);
    // condition to check that number of subjects is between 3 and 5
    if (num_subjects < 3 || num_subjects > 5) {
        printf("Invalid number of subjects. Please enter between 3 and 5.\n");
        return 1; // Exit the program if the input is invalid
    }
    // Take input for each subject, store in the array, and calculate the total sum
    for (int i = 0; i < num_subjects; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum += marks[i];
    }
    // Calculate the average
    average = sum / num_subjects;
    // Call the function to calculate the grade based on the average
    grade = calculate_grade(average);
    //return value will be store in grade
    // Print the average marks and the grade
    printf("\nAverage Marks: %.2f\n", average);
    printf("Grade: %c\n", grade);
    return 0; // End of program
}
// Function definition
// Return the grade based on the average
char calculate_grade(float average) {
    if (average >= 90)
        return 'A';
    else if (average >= 80)
        return 'B';
    else if (average >= 70)
        return 'C';
    else if (average >= 60)
        return 'D';
    else
        return 'F';
}
