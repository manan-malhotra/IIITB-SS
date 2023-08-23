#include<stdio.h>
#include<unistd.h>

int main(){
char* f1 = "file1.txt";
char* f2 = "softlinkUsingC";
char* f3 = "hardlinkUsingC";
printf("Softlink: %d\n",symlink(f1,f2));
printf("Hardlink: %d\n",link(f1,f3));
return 0;
}
