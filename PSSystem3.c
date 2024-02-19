#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
int RET=0;

RET=fork();

if(RET==0)
{
printf("Child process is running\n");
}
else
{
printf("Parent process is running\n");
}

return 0;
}
