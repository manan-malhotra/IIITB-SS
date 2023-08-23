#include <stdio.h>
#include <stdlib.h>

#define FIFO_FILE  "myFifo"

int main()
{
        FILE *fp;


while(1){
        if((fp = fopen(FIFO_FILE, "w")) == NULL) {
                perror("fopen");
                exit(1);
        }
printf("Write here:");
char buff[80];
scanf("%s",buff);
        fputs(buff, fp);

        fclose(fp);
}
        return(0);
}
