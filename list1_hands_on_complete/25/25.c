/*
============================================================================
Name : 2.c
Author : Manan Malhotra
Description : Write a program to create three child processes. The parent should wait for a particular child (use waitpid system call).
Date: 7th Sept, 2023.
============================================================================
*/

#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
int main(){
pid_t c1;
pid_t c2;
pid_t c3;
if(!(c1=fork())){
printf("Child 1 running\n");
sleep(4);
printf("Child 1 ending\n");
}else if(!(c2=fork())){
printf("Child 2 running\n");
sleep(2);
printf("Child 2 ending\n");
}else if(!(c3=fork())){
printf("Child 3 running\n");
sleep(6);
printf("Child 3 ending\n");
}else{
//printf("Parent running!\n");
waitpid(c3, NULL, 0);
printf("Parent waiting for child 3\n");
}
return 0;
}
