#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Course {
    // Add course details (e.g., ID, name, seats)
    char course_code[100];
	char course_name[100];
    char facultyUID[100];
    int  credits;
    int  currentStudentsEnrolled;
    int  maxStudentsAllowed;

} Course;

typedef struct Admin {
    // Add course details (e.g., ID, name, seats)
    char name[100];
	char userName[100];
	char password[100];
} Admin;


// Define data structures to hold student, faculty, and course information
typedef struct Student {
    // Add student details (e.g., ID, name, courses)
    char name[100];
	char rollno[100];
	char emailId[100];
	char password[100];
	int  status;
	struct Course courseEnrolled[6];
} Student;


typedef struct Faculty {
    // Add faculty details (e.g., ID, name, courses)
    char name[100];
    char facultyUID[100];
	char emailId[100];
	char password[100];
	struct Course courseOffered;
} Faculty;



