#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>
int main()
{
int fd;
char buff[50];
char* file_name="open.txt";
  fd=open(file_name, O_CREAT | O_EXCL | O_RDWR, 0666);
  printf("fd=%d \n", fd);
  if(fd == -1) {
    perror("Program");
  }
char str[80]="This is a test line.";
  write(fd, str, sizeof(str));
  close(fd);
  fd=open(file_name, O_RDWR);
  char str2[80];
  read(fd, str2, 80);
  printf("Read = %s\n", str2);
  close(fd);
return 0;
}
