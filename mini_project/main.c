#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Auth.h"
void adminMenu() {
    int choice;

    //scanf("%d",choice);

    do {
        printf("\nAdmin Menu\n\n");
        printf("1. Add Student\n");
        printf("2. Add Faculty\n");
        printf("3. Activate/Deactivate Student\n");
        printf("4. Update Student/Faculty details\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Implement logic to add a student
                break;
            case 2:
                // Implement logic to add a faculty member
                break;
            case 3:
                // Implement logic to activate/deactivate a student
                break;
            case 4:
                // Implement logic to update student/faculty details
                break;
            case 5:
                // Implement logic to exit admin menu
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);
}
void facultyMenu() {
    int choice;
    
    //scanf("%d",choice);

    do {
        printf("\nFaculty Menu\n");
        printf("1. Add New Course\n");
        printf("2. Remove Offered Course\n");
        printf("3. View Enrollments in Courses\n");
        printf("4. Password Change\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Implement logic to add a new course
                break;
            case 2:
                // Implement logic to remove a course
                break;
            case 3:
                // Implement logic to view enrollments
                break;
            case 4:
                // Implement logic for password change
                break;
            case 5:
                // Implement logic to exit faculty menu
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);
}

void studentMenu() {
    int choice;

    //scanf("%d",choice);

    do {
        printf("\nStudent Menu\n");
        printf("1. Enroll in New Course\n");
        printf("2. Unenroll from Course\n");
        printf("3. View Enrolled Courses\n");
        printf("4. Change Password\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Implement logic to enroll in a new course
                break;
            case 2:
                // Implement logic to unenroll from a course
                break;
            case 3:
                // Implement logic to view enrolled courses
                break;
            case 4:
                // Implement logic for password change
                break;
            case 5:
                // Implement logic to exit student menu
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);
}

int main() {
    int userType;
    char username[50];
    char password[50];

    int first = 0;
    while (1) {
        if(first==0){
            printf("\n.......Welcome to Academia.........\n");
        }else{
            printf("\n.......Welcome Back to Academia.........\n");
        }
        first = 1;
        printf("Please select your login type\n");
        printf("\n1. Admin\n");
        printf("2. Faculty\n");
        printf("3. Student\n");
        printf("4. Exit\n");
        printf("Enter user type (1-3) or 4 to exit: ");
        scanf("%d", &userType);

        if (userType == 4) {
            // Exit the program
            break;
        }

        printf("\nEnter username: ");
        scanf("%s", username);
        printf("Enter password: ");
        scanf("%s", password);

        int authenticated = 0;
        switch (userType) {
            case 1:
                authenticated = authenticateAdmin(username, password);
                if (authenticated) {
                    adminMenu();
                } else {
                    printf("\nInvalid credentials. Please try again.\n");
                }
                break;
            case 2:
                authenticated = authenticateFaculty(username, password);
                if (authenticated) {
                    facultyMenu();
                } else {
                    printf("\nInvalid credentials. Please try again.\n");
                }
                break;
            case 3:
                authenticated = authenticateStudent(username, password);
                if (authenticated) {
                    studentMenu();
                } else {
                    printf("\nInvalid credentials. Please try again.\n");
                }
                break;
            default:
                printf("\nInvalid choice. Please try again.\n");
        }
    }

    return 0;
}