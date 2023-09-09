/*
============================================================================
Name : 30.c
Author : Manan Malhotra
Description : Write a program to run a script at a specific time using a Daemon process.
Date: 9th Sept, 2023.
============================================================================
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
int main(){
pid_t ret =fork();
if(ret<0) {
perror("fork");
exit(0);
}else if(ret > 0){
//ending parent to create daemon
exit(1);
}
pid_t sid = setsid();
//sessionId for daemon
if(sid < 0) {
perror("sid");
exit(0);
}
chdir("/Users/mananmalhotra/Downloads/IIITB/Software Systems/list1_hands_on_complete/30");
close(STDIN_FILENO);
close(STDOUT_FILENO);
close(STDERR_FILENO);
sleep(10);
system("echo hel234o > file.txt");
return 0;
}
