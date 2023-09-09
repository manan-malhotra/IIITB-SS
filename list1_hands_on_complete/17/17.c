/*
============================================================================
Name : 2.c
Author : Manan Malhotra
Description :Write a program to simulate online ticket reservation. Implement write lock
Write a program to open a file, store a ticket number and exit. Write a separate program, to open the file, implement write lock, read the ticket number, increment the number and print the new ticket number then close the file.
Date: 29th Aug, 2023.
============================================================================
*/
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main(){
struct flock lock;
int fd = open("file.txt",O_RDWR);
lock.l_whence = SEEK_SET;
  lock.l_start = 0;
  lock.l_len = 0;
  lock.l_type=F_RDLCK; 
  int buffer;
  printf("Read Lock Set");
  fcntl(fd, F_SETLKW, &lock);
  read(fd,&buffer,sizeof(int));
  lseek(fd,0,SEEK_SET);
  printf("Ticket No: %d\n",buffer);
  buffer++;
  lock.l_type=F_WRLCK;
  fcntl(fd,F_SETLKW,&lock);
  printf("Write lock set");
  write(fd,&buffer,sizeof(int));
  lseek(fd,0,SEEK_SET);
  read(fd,&buffer,sizeof(int));
  printf("Read after writing: %d\n",buffer);
  printf("Press return to unlock");
  getchar();
  lock.l_type=F_UNLCK;
  fcntl(fd,F_SETLKW,&lock);
  close(fd);
return 0;
}
