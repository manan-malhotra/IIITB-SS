/*
============================================================================
Name : 20a.c
Author : Manan Malhotra
Roll No. : MT2023177
Description :  Write two programs so that both can communicate by FIFO -Use one way communications. 
Date: 6th Oct, 2023.
============================================================================
*/

#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

void main(void) {
    int fd = open("fifo", O_RDONLY | O_CREAT, 0666);
    char buffer[100];
    int size = read(fd, buffer, 100);
    printf("%s\n", buffer);
}