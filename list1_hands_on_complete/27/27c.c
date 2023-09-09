/*
============================================================================
Name : 28.c
Author : Manan Malhotra
Description :Write a program to execute ls -Rl by the following system calls
c. execle
Date: 7th Sept, 2023.
============================================================================
*/
#include<stdio.h>
#include<unistd.h>
int main(){
printf("c: execle \n:");
execle("/bin/ls", "ls","-Rl",NULL,NULL);
return 0;

}
