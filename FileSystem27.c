#include<stdio.h>
#include<string.h>
#include<dirent.h>
#include<sys/stat.h>
//Enter the name othe folder print the name of the file if ts's empty

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
if(S_ISREG(sobj.st_mode))
{
if(sobj.st_size==0)
{
printf("Name of the empty file: %s \n",name);
}
}
}
closedir(dp);

return 0;
}
