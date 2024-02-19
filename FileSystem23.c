#include<stdio.h>
#include<string.h>
#include<dirent.h>
#include<sys/stat.h>
//Enter the name of the folder and print name of the file and size of the file

int main(int argc,char * argv[])
{

char DirName[20];
DIR *dp=NULL;
struct dirent *entry= NULL;
char name[30];
struct stat sobj;

printf("Enter name of directory: \n");
scanf("%s",DirName);

dp= opendir(DirName);
if(dp==NULL)
{
printf("Unable to open directory\n");
return -1;
}
while((entry=readdir(dp))!=NULL)
{
sprintf(name,"%s/%s",DirName,entry->d_name);
stat(name,&sobj);
printf("File name: %s File size: %ld \n",name,sobj.st_size);
}
closedir(dp);

return 0;
}
