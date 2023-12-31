/*
============================================================================
Name : 30a.c
Author : Manan Malhotra
Roll No. : MT2023177
Description : Write a program to create a shared memory.    
a. write some data to the shared memory    
b. attach with O_RDONLY and check whether you are able to overwrite.    
c. detach the shared memory    
d. remove the shared memory
Date: 6th Oct, 2023.
============================================================================
*/


#include<stdio.h>
#include<unistd.h>
#include<sys/shm.h>

int main() {
    int key, shmid;
    char *data;
    key=ftok("file", 97);
    shmid=shmget(key, 1024, IPC_CREAT | 0744);
    data=(char *)shmat(shmid, NULL, 0);
    printf("Enter input : ");
    scanf("%s", data);
}