/*
============================================================================
Name : 23.c
Author : Manan Malhotra
Description : Write a program to create a Zombie state of the running program.
Date: 7th Sept, 2023.
============================================================================
*/

#include<stdio.h>
#include <sys/wait.h>
#include<unistd.h>
int main(){
int parentPid = getpid();
printf("Parent process id : %d\n",parentPid);
pid_t returnVal = fork();
if(returnVal<0){
perror("fork");
}
else if(returnVal == 0 ){
//child process
printf("Child process id : %d\n",(int) getpid());
printf("Parent process id : %d\n",(int) getppid());
sleep(5);
}
else{
sleep(20);
//wait(NULL);
}
return 0;
}
