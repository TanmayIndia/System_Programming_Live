#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/stat.h>
//stat system call
int main(int argc, char *argv[])
{
struct stat sobj;

if(argc != 2)
{
printf("Insufficient arguments\n");
return -1;
}

stat(argv[1],&sobj);

printf("File name is: %s\n",argv[1]);
printf("File size is: %d\n",sobj.st_size);
printf("Number of links : %d\n",sobj.st_nlink);
printf("Inode Number : %d\n",sobj.st_ino);
printf("File system number : %d\n",sobj.st_dev);
printf("Number of blocks : %d\n",sobj.st_blocks);

return 0;
}
