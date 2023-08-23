#include<stdio.h>
#include<unistd.h>
#include<string.h>
void main() {
  char* qs= "Enter a number ";
  write(1,qs,strlen(qs));
  char buffer[32];
  int size_read=read(0, buffer, 20);
  write(1, buffer, size_read);
}
