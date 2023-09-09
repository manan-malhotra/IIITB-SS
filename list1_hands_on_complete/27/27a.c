/*
============================================================================
Name : 28.c
Author : Manan Malhotra
Description :Write a program to execute ls -Rl by the following system calls a. execl
Date: 7th Sept, 2023.
============================================================================
*/
#include<stdio.h>
#include<unistd.h>
int main(){
printf("a: execl \n:");
execl("/bin/ls", "ls","-Rl",NULL);
return 0;

}
