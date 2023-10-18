/*
============================================================================
Name : 19a.c
Author : Manan Malhotra
Roll No. : MT2023177
Description :  Create a FIFO file by    a. mknod command    b. mkfifo command    c. use strace command to find out, which command (mknod or mkfifo) is better.    c. mknod system call    d. mkfifo library function
Date: 5th Oct, 2023.
============================================================================
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
	int result = mkfifo("f1.fifo",S_IRWXU);
	if(result < 0)
	{
		perror("mkfifo");
		exit(1);
	}
	return 0;
}
