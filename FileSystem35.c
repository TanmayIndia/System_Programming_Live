#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<dirent.h>
#include<sys/dir.h>
//Search the file and delete it
//wap to implement remove system call
int main(int argc, char *argv[])
{
 DIR *dp=NULL;
 struct dirent *entry=NULL;
 char path[30];
 
 if(argc!=3)
 {
 printf("Insufficient arguments.\n");
 return -1;
 }
 
 dp=opendir(argv[1]);
 
 if(dp==NULL)
 {
 printf("Unable to open directory.\n");
 return -1;
 }
 
 while((entry= readdir(dp))!= NULL)
 {
 if((strcmp(argv[2],entry->d_name)) ==0 )
 {
 printf("File is present in the directory\n");
 sprintf(path,"%s/%s",argv[1],entry->d_name);
 remove(path);
 printf("The file is deleted.\n");
 break;
 }
 }
 if(entry==NULL)
 {
 printf("There is no such file\n");
 return -1;
 }
 closedir(dp);
    return 0;
}
