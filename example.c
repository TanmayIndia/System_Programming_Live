#include<stdio.h>
#include<fcntl.h>

int main(int argc, char * argv[])
{
int fd=0;

if(argc != 2)
{	
	printf("Invalid number of arguments\n");
	return -1;
}
fd=creat(argv[1],0777);

if(fd==-1)
{
	printf("Unable to create file\n");
	return -1;
}
else
{
printf("The file has been created with fd: %d\n",fd);
}
close(fd);

return 0;
}
