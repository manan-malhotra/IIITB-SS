/*
============================================================================
Name : 5.c
Author : Manan Malhotra
Description : Write a program to create five new files with infinite loop
Date: 23rd Aug, 2023.
============================================================================
*/
#include<stdio.h>
#include<fcntl.h>
#include<stdbool.h>
#include<unistd.h>
int main(){
int k = 0;
FILE* file;
while(1){
char buffer[32];
  if(k<5) {
  k++;
  snprintf(buffer, sizeof(char) * 32, "file%i.txt", k);
//  file = fopen(buffer, "wb");
//  fclose(file)
int fd = open(buffer,O_CREAT,0666);
close(fd);
}
}
return 0;
}
