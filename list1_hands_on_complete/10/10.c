/*
============================================================================
Name : 10.c
Author : Manan Malhotra
Description : Write a program to open a file with read write mode, write 10 bytes, move the file pointer by 10 bytes (use lseek) and write again 10 bytes.
Date: 23rd Aug, 2023.
============================================================================
*/
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
int main(){
int fd = open("file.txt" , O_RDWR | O_CREAT  , 0666);
if(fd==-1){
perror("File Error:");
}
char buff[10] = "0123456789";
write(fd, buff, 10);
//read(fd,buff,sizeof(buff));
//printf("Buff: %s",buff);
int value = lseek(fd,10,SEEK_CUR);
printf("Lseek value returned: %d",value);
write(fd, buff, 10);
close(fd);
system("od -c file.txt");
return 0;
}
