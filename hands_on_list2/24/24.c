/*
============================================================================
Name : 24.c
Author : Manan Malhotra
Roll No. : MT2023177
Description : Write a program to create a message queue and print the key and message queue id.
Date: 6th Oct, 2023.
============================================================================
*/

#include<stdio.h>
#include<unistd.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<sys/types.h>

int main() {
    int msgid;
    key_t key;
    key=ftok(".", 97);
    msgid=msgget(key, IPC_CREAT | 0744);
    printf("Key = %d\nMessage queue id = %d", key, msgid);
}