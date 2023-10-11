#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <time.h>
#include "Data.h"
int authenticateAdmin(char username[100],char inputpassword[100]){
    printf("\nAuthenticating Admin....\n");
    struct Admin adminchk;
    int fd=open("Database/Admin.txt",O_RDONLY|O_CREAT|O_APPEND,0666);
    while(read(fd,&adminchk,sizeof(adminchk))>0){
        if(strcmp(adminchk.userName,username)==0 &&
           strcmp(adminchk.password,inputpassword)==0){
            return 1;
           }
    }
    return 0;

}
int authenticateFaculty(char username[50],char password[50]){
    return 0;
}
int authenticateStudent(char username[50],char password[50]){
    return 1;
}