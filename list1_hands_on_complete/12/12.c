/*
=================================================================================
Name : 12.c
Author : Manan Malhotra
Description : Write a program to find out the opening mode of a file. Use fcntl.
Date: 24th August, 2023
=================================================================================
*/

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
    int fd = open("file", O_CREAT | O_RDWR, 0666);
    int mode = fcntl(fd, F_GETFL);
    printf("%d\n", mode);
    // Can and with O_ACCMODE for bitwise manipulation
    // 0 > Read
    // 1 > Write
    // 2 > ReadWrite 
return 0;
}
