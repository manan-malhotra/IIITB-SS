/*
============================================================================
Name : 9.c
Author : Manan Malhotra
Description : Write a program to print the following information about a given file.
Date: 23rd Aug, 2023.
============================================================================
*/
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
#include<time.h>
int main(){
struct stat fileStat;
char* file = "file.txt";
 time_t last_access, last_mod, last_changed;
if(stat(file,&fileStat)==-1){
perror("Program");
exit(0);
}
 last_access=fileStat.st_atime;
  last_mod=fileStat.st_mtime;
  last_changed=fileStat.st_ctime;
printf("Inode: %llu",fileStat.st_ino);
printf("\nHard links: %d",fileStat.st_nlink);
printf("\nUser Id: %d",fileStat.st_uid);
printf("\nGroup Id: %d",fileStat.st_gid);
printf("\nSize: %lld",fileStat.st_size);
printf("\nBlock size: %lld",fileStat.st_blocks);
 printf("\nlast accessed: %s\n", ctime(&last_access));
  printf("last modified: %s\n", ctime(&last_mod));
  printf("last changed: %s\n", ctime(&last_changed));
return 0;
}
