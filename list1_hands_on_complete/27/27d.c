/*
============================================================================
Name : 28.c
Author : Manan Malhotra
Description :Write a program to execute ls -Rl by the following system calls
d. execv 
Date: 7th Sept, 2023.
============================================================================
*/
#include<stdio.h>
#include<unistd.h>
int main(){
printf("d: execv \n:");
static char *argv[] = {"/bin/ls", "-Rl", NULL};
execv(argv[0], argv);
return 0;

}
