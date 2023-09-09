/*
============================================================================
Name : 16a.c
Author : Manan Malhotra
Description : Write a program to perform mandatory locking.
              a. Implement write lock
Date: 25th August, 2023
============================================================================
*/
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/file.h>
int main(){
struct flock lock;
int fd = open("file.txt", O_WRONLY| O_CREAT, 0666);
if(fd<0){
perror("file error");
exit(0);
}
lock.l_type = F_WRLCK;
lock.l_whence=SEEK_SET;
lock.l_start=0;
lock.l_len=0;
int wfcntl = fcntl(fd,F_SETLKW,&lock);
if(wfcntl<0){
perror("fcntl");
exit(1);
}
printf("Write lock\n");
write(fd, "This is a mandatory write lock.", 26);
printf("Press return to unlock");
getchar();
lock.l_type = F_UNLCK;
if (fcntl(fd, F_SETLKW, &lock) < 0) {
perror("fcntl");
exit(1);
}
close(fd);
return 0;
}
