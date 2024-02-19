#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
//Creat the file with given file name, creat type 2
int main(int argc, char * argv[])
{
int fd =0;

if(argc!=2)
{
printf("insufficient arguments\n");
return -1;
}
fd=open(argv[1],O_RDONLY);
if(fd!=-1)
{
printf("The file is already exist.\n");
return -1;
}
else
{
fd=creat(argv[1],0777);

if(fd!=-1)
{
printf("File is successfully created with fd: %d\n", fd);
}
}
return 0;
}

