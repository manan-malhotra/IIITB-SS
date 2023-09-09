/*
============================================================================
Name : 22.c
Author : Manan Malhotra
Description : Write a program, open a file, call fork, and then write to the file by both the child as well as the parent processes. Check output of the file.
Date: 7th Sept, 2023.
============================================================================
*/
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/types.h>

int main(){
int fd = open("file.txt", O_RDWR | O_CREAT , 0666);
char bufP[]="Written by fd using  Parent\n";
char bufC[]="Written by fd using Child\n";
pid_t ret = fork();
if(ret<0){
perror("fork");
exit(0);
}else if(ret==0){
write(fd,bufC,sizeof(bufC));
}else{
wait(NULL);
write(fd,bufP,sizeof(bufP));
}
return 0;
}
