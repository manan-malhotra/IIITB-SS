#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>

struct resident{
  int roll_no;
  char addr[20];
  int marks;
};

int main() {
  struct flock lock;
  int fd=open("rec.txt", O_CREAT | O_RDWR, 0744);
  struct resident res1, res2, res3;
  res1.roll_no=1;
  res2.roll_no=2;
  res3.roll_no=3;
  strcpy(res1.addr, "ABC");
  strcpy(res2.addr, "XYZ");
  strcpy(res3.addr, "GHI");
  res1.marks=18;
  res2.marks=16;
  res3.marks=9;
  write(fd, &res1, sizeof(struct resident));
  lock.l_type=F_WRLCK;
  lock.l_whence = SEEK_SET;
  lock.l_start = 8;
  lock.l_len = 8;
  lock.l_pid = getpid();
  fcntl(fd,F_SETLKW , &lock);
  printf("Entered critical section...\n");
  printf("Press return to unlock...\n");
  getchar();
  printf("Write lock unset...\n");
  lock.l_type=F_RDLCK;
  lock.l_start=0;
  lock.l_len=8;
  fcntl(fd, F_SETLKW, &lock);
  printf("Read lock set...\n");
  lock.l_type=F_UNLCK;
  lock.l_start=8;
  lock.l_len=8;
  fcntl(fd, F_SETLKW, &lock);
  printf("Press return to exit...\n");
  getchar();
  printf("Read lock unset...\n");
  close(fd);
return 0;
}
