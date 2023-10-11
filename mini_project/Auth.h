#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int authenticateAdmin(char username[50],char password[50]){
    printf("\nAuthenticating Admin....\n");
    return 1;
}
int authenticateFaculty(char username[50],char password[50]){
    return 0;
}
int authenticateStudent(char username[50],char password[50]){
    return 1;
}