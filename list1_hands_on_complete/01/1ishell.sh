#! /bin/bash
#/*
#============================================================================
#Name : 1ishell.c
#Author : Manan Malhotra
#Description : 1. Create the following types of a files using (i) shell command a. soft link b. hard link c. FIFO
#Date: 28th Aug, 2023.
#============================================================================
#*/
ln -s file1.txt softlinkUsingShell
ln file1.txt hardLinkUsingShell
mkfifo pipeUsingShell

