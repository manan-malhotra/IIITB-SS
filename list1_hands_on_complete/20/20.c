/*
============================================================================
Name : 20.c
Author : Manan Malhotra
Description : Find out the priority of your running program. Modify the priority with nice command.
Date: 7th Sept, 2023.
============================================================================
*/
#include<stdio.h>
#include <sys/resource.h>
#include<unistd.h>

int main(){
int a = getpriority(PRIO_PROCESS, 0);
printf("Priority before = %d pid=%d\n", a,getpid());
getchar();
nice(5);
a = getpriority(PRIO_PROCESS, 0);
printf("Priority after = %d\n", a);
while(1);
return 0;
}
