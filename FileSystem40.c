#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
//lseek system call
//Read 20 bytes from the given offset
int main(int argc, char * argv[])
{

int fd=0;
int Ret=0;
char Arr[20];

if(argc!=3)
{
printf("Insufficient arguments\n");
return -1;
}

fd = open(argv[1],O_RDONLY);

if(fd==-1)
{
printf("Unable to open source file\n");
return -1;
}

lseek(fd,atoi(argv[2]),0);

Ret= read(fd,Arr,sizeof(Arr));
printf("Data from the file is.\n");
write(1,Arr,Ret);
close(fd);
return 0;
}
