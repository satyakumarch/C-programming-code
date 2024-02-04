#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 50

// Student structure
typedef struct {
    char name[50];
    int roll_number;
    int total_marks;
    int obtained_marks;
    float percentage;
    char grade;
} Student;

// Function prototypes
void add_student(Student students[], int *num_students);
void display_student(Student student);
void display_all_students(Student students[], int num_students);
int find_student_index(Student students[], int num_students, int roll_number);
void update_student(Student students[], int num_students);
void delete_student(Student students[], int *num_students);
void search_student(Student students[], int num_students);
void mark_student(Student students[], int num_students);

int main() {
    int num_students = 0;
    Student students[MAX_STUDENTS];
    int choice;

    do {
        printf("\n\n===== CA EVALUATION SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Update Student\n");
        printf("4. Delete Student\n");
        printf("5. Search Student\n");
        printf("6. Mark Student\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                add_student(students, &num_students);
                break;
            case 2:
                display_all_students(students, num_students);
                break;
            case 3:
                update_student(students, num_students);
                break;
            case 4:
                delete_student(students, &num_students);
                break;
            case 5:
                search_student(students, num_students);
                break;
            case 6:
                mark_student(students, num_students);
                break;
            case 7:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 7);

    return 0;
}

// Function to add a student
void add_student(Student students[], int *num_students) {
    if (*num_students >= MAX_STUDENTS) {
        printf("Maximum students reached. Cannot add more.\n");
        return;
    }

    Student student;

    printf("Enter name: ");
    scanf("%s", student.name);

    printf("Enter roll number: ");
    scanf("%d", &student.roll_number);

    printf("Enter total marks: ");
    scanf("%d", &student.total_marks);

    printf("Enter obtained marks: ");
    scanf("%d", &student.obtained_marks);

    student.percentage = (float) student.obtained_marks / student.total_marks * 100;

    if (student.percentage >= 90) {
        student.grade = 'A';
    } else if (student.percentage >= 80) {
        student.grade = 'B';
    } else if (student.percentage >= 70) {
        student.grade = 'C';
    } else if (student.percentage >= 60) {
        student.grade = 'D';
    } else if (student.percentage >= 50) {
        student.grade = 'E';
    } else {
        student.grade = 'F';
    }

    students[*num_students] = student;
    (*num_students)++;

    printf("Student added successfully.\n");
}

// Function to display a single student
//void display_student(Student student) {
//    printf("Name: %s\n", student);