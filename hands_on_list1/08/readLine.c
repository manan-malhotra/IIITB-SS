#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
#include<unistd.h>
const char EOL = '\n';

void main() {
  FILE* fd=fopen("file1.txt", "r");
  if(fd == NULL) {
    printf("Error %d", errno);
    perror("Program");
    exit(0);
  }
  int c=fgetc(fd);
  char buffer[1024];
  int k=0;
  while(c!=EOF) {
    while(c!=EOL) {
      printf("%c", c);
      buffer[k]=c;
      //write(1, c, 10);
      k++;
      c=fgetc(fd);
    }
    buffer[k++]='\n';
    write(1, buffer, k);
    buffer[0]='\0';
    c=fgetc(fd);
    k=0;
  }
  fclose(fd);
}
