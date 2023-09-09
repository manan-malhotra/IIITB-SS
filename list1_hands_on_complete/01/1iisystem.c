/*
============================================================================
Name : 1iisystem.c
Author : Manan Malhotra
Description : Create the following types of a files using (ii) system call
a. soft link (symlink system call)
b. hard link (link system call)
Date: 23rd Aug, 2023.
============================================================================
*/
#include<stdio.h>
#include<unistd.h>
#include <sys/stat.h>
#include <unistd.h>

#define FIFO_FILE "fifoUsingSystem"
int main(){
char* file = "file1.txt";
char* softLink = "softLinkUsingSystem";
char* hardLink = "hardLinkUsingSystem";
mknod(FIFO_FILE, S_IFIFO|0666, 0);
int s = symlink(file,softLink);
if(s){
perror("symlink");
}
int h = link(file,hardLink);
if(h){
perror("hardlink");
}
return 0;
}
