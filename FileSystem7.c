#include<stdio.h>
#include<fcntl.h>
//open system call with mode
int main(int argc, char *argv[])
{
int *fd=NULL;

if(argc!=2){
printf("Invalid number of arguments\n");
return -1;
}

fd =open(argv[1],O_RDONLY);

if(fd==-1){
printf("Unable to open the file\n");
return -1;
}
else
{
printf("File opened successfully with fd: %d\n",fd);
}

return 0;
}

