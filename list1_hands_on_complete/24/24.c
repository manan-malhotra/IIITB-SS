/*
============================================================================
Name : 24.c
Author : Manan Malhotra
Description : Write a program to create an orphan process.
Date: 7th Sept, 2023.
============================================================================
*/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(){
pid_t ret = fork();
if(ret<0){
perror("fork");
exit(0);
}else if(ret == 0){
printf("Child %d process running\n",(int)getpid());
sleep(10);
printf("Child is orphan\n");
exit(0);
}else{
printf("Parent %d process running\n",(int)getpid());
}
return 0;
}
