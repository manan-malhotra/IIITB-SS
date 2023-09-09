/*
============================================================================
Name : 28.c
Author : Manan Malhotra
Description :Write a program to execute ls -Rl by the following system calls 
b. execlp
Date: 7th Sept, 2023.
============================================================================
*/
#include<stdio.h>
#include<unistd.h>
int main(){
printf("b: execlp \n:");
execlp("ls","ls","-Rl",NULL);
return 0;

}
