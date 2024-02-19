#include<stdio.h>
#include<fcntl.h>
//creat system call
int main(int argc, char *argv[])
{
int fd=0;

printf("Usage : Name_OF_Executable Name_OF_File \n");

if(argc != 2){
	printf("Invalid number of arguments\n");
	return -1;
}

fd = creat(argv[1],0777);

if(fd==-1){
	printf("Unable to open the file\n");
	return -1;
}
else{
	printf("File opened successfully with fd: %d\n",fd);
}
return 0;
}

