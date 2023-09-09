/*
============================================================================
Name : 3.c
Author : Manan Malhotra
Description :Write a program to create a file and print the file descriptor value. Use creat ( ) system call
Date: 23rd Aug, 2023.
============================================================================
*/
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int main(){
char* fileName="file.txt";
  //modeOfFile mode=O_CREAT;
  int fd;
  fd=creat(fileName,O_CREAT);
if(fd==-1){
perror("creat");
}else{
printf("FD Number is: %d",fd);
}
return 0;
}
