#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<dirent.h>
//Rename File names numerically

int main(int argc, char * argv[])
{
DIR *dp =NULL;
struct dirent *entry=NULL;
int iCnt=1;
char oldName[50];
char newName[50];

dp = opendir(argv[1]);

if(dp==NULL)
{
printf("Unable to open directory\n");
return -1;
}

while((entry = readdir(dp)) != NULL)
{
sprintf(oldName, "%s/%s",argv[1],entry->d_name);
sprintf(newName, "%s/%d.txt",argv[1],iCnt);
rename(oldName,newName);
iCnt++;
}
closedir(dp);
return 0;
}
