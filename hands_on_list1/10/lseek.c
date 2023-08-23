#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<errno.h>

int main() {
  int fd=open("file.txt", O_RDWR | O_CREAT, 0666);
  char buf[10]={'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
  write(fd, buf, 10);
  int rlseek=lseek(fd, 0, SEEK_CUR);
  printf("return value of lseek: %d\n", rlseek);
  write(fd, buf, 10);
  char buffer[80];
lseek(fd,0,SEEK_SET);
read(fd,buffer,50);
printf("\n%s Buff:::",buffer);
  close(fd);
  system("od -c file.txt");
return 0;
}
