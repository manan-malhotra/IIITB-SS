#include<stdio.h>
#include<errno.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
int main(int argc, char* argv[]) {
char* f1 ="file1.txt";
char* f2 = "file2.txt";  
int file1=open(f1, O_RDONLY);
  if(file1 < 0) {
    printf("Error %d", errno);
    perror("Program");
    exit(0);
  }
  int file2=open(f2, O_WRONLY | O_EXCL | O_CREAT, 0666);
  if(file2 < 0) {
    printf("Error %d", errno);
    perror("Program");
    exit(0);
  }

  char buffer[1024];
  int size_read;
size_read=read(file1,buffer,sizeof(buffer));
    write(file2, buffer, size_read);
  close(file1);
  close(file2);
return 0;
}

