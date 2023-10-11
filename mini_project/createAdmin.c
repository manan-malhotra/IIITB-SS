#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "Data.h"
int check(char inputUserName[100]){
    struct Admin adminchk;
    int fd2=open("Database/Admin.txt",O_RDONLY|O_CREAT|O_APPEND,0666);
    while(read(fd2,&adminchk,sizeof(adminchk))>0){
        if(strcmp(adminchk.userName,inputUserName)==0){
            return 1;
           }
    }
    return 0;
}
int main(){
    struct Admin addAdmin;
    int fd=open("Database/Admin.txt",O_WRONLY|O_CREAT|O_APPEND,0666);
    
    if(fd==-1){
        printf("Cannot store admin\n");
        return -1;
    }
    printf("\nEnter Admin Name: ");
    scanf("%s",addAdmin.name);
    printf("\nEnter Admin Username: ");
    scanf("%s",addAdmin.userName);
    // search here in db
    // if username exists, ask for a new userName
    while (1)
    {
        if(check(addAdmin.userName)){
            printf("\nUsername already taken. Please choose a unique Username.\n");
            printf("\nEnter New Admin Usename: ");
            scanf("%s",addAdmin.userName);
        }else{
            break;
        }
    }
    //printf("Username is %s\n",addAdmin.userName);
    
    printf("\nEnter Admin Password: ");
    scanf("%s",addAdmin.password);
    if(write(fd,&addAdmin,sizeof(addAdmin))<0){
        printf("\nUnable to create Admin\n");
    }else{
        printf("Admin created successfully\n");
    }
}