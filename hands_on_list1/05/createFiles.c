#include<stdio.h>
#include<fcntl.h>
#include<stdbool.h>
int main(){
int k = 0;
FILE* file;
while(1){
char buffer[32];
  if(k<5) {
  k++;
  snprintf(buffer, sizeof(char) * 32, "file%i.txt", k);
  file = fopen(buffer, "wb");
  fclose(file);
}
}
return 0;
}
