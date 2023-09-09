/*
============================================================================
Name : 6.c
Author : Manan Malhotra
Description : Write a program to take input from STDIN and display on STDOUT. Use only read/write system calls
Date: 23rd Aug, 2023.
============================================================================
*/
#include<stdio.h>
#include<unistd.h>
#include<string.h>
int main() {
  char* qs= "Enter a number ";
  write(1,qs,strlen(qs));
  char buffer[32];
  int size_read=read(0, buffer, 20);
  write(1, buffer, size_read);
return 0;
}
