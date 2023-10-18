/*
============================================================================
Name : 19a.c
Author : Manan Malhotra
Roll No. : MT2023177
Description :  Create a FIFO file by    a. mknod command    b. mkfifo command    c. use strace command to find out, which command (mknod or mkfifo) is better.    c. mknod system call    d. mkfifo library function
Date: 5th Oct, 2023.
============================================================================
*/
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
int main()
{
	int result = mknod("fifo3", S_IRUSR | S_IWUSR | S_IFIFO, 0);
	if(result < 0)
	{
		perror("mknod");
		exit(1);
	}
	return 0;
}
