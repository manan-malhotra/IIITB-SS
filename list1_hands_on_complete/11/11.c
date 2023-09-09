/*
============================================================================
Name : 11.c
Author : Manan Malhotra
Description : Write a program to open a file, duplicate the file descriptor and append the file with both the descriptors and check whether the file is updated properly or not.
a. use dup 
b. use dup2 
c. use fcntl
Date: 24th Aug, 2023.
============================================================================
*/
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>

int main(){
int fd = open("file.txt" , O_RDWR | O_CREAT , 0666);
int dupfd = dup(fd);
int fd2;
dup2(fd,fd2);
int fdF = fcntl(fd, F_DUPFD,0);
char buff[] = "Written by fd\n";
char buff2[] = "Written by dupfd\n";
char buff3[] = "Written by dup2fd\n";
char buff4[] = "Written by fcntl\n";
write(fd,buff,sizeof(buff));
write(dupfd,buff2,sizeof(buff2));
write(fd2,buff3,sizeof(buff3));
write(fdF,buff4,sizeof(buff4));
close(fd);
close(dupfd);
return 0;
}
