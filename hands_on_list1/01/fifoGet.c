#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>

#define FIFO_FILE "myFifo"
int main(){
FILE* fd;
mknod(FIFO_FILE, S_IFIFO|0666, 0);
 char readbuf[80];
while(1){
fd=fopen(FIFO_FILE,"r");
fgets(readbuf, 80, fd);
printf("Reading: %s\n",readbuf);
}
fclose(fd);
return 0;
}
