#include<stdio.h>
#include<unistd.h>
#include<string.h>
//Implement access system call
int main(int argc, char * argv[])
{
int mode =0;

if(argc!=3)
{
printf("insufficient arguments\n");
return -1;
}
if(strcmp(argv[2],"read")==0)
{
mode= R_OK;
}
else if(strcmp(argv[2],"write")==0)
{
mode = W_OK;
}
else if(strcmp(argv[2],"execute")==0)
{
mode = X_OK;
}
if((access(argv[1],mode))<0)
{
printf("You are not able to access the file %s in %s mode.\n",argv[1],argv[2]);
}
else
{
printf("You can access the file %s in %s mode.\n",argv[1],argv[2]);
}
return 0;
}

