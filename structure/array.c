#include <stdio.h>

struct student {
    int rollNo;
    char name[20];
    float marks;
};

int main() {
    struct student s[3];
    
    printf("Enter details for 3 students (rollNo name marks):\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d %19s %f", &s[i].rollNo, s[i].name, &s[i].marks);
    }

    printf("\nEntered details are:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d: Roll No: %d, Name: %s, Marks: %.2f\n", 
                i + 1, s[i].rollNo, s[i].name, s[i].marks);
    }

    return 0;
}
