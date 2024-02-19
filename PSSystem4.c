#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
int RET=0;
int PID=0;

RET=fork();

if(RET==0)//Child
{
printf("Child process is running\n");
printf("PID  of parent process of parent is: %d\n",getppid());//5641
printf("PID  of child process is: %d\n",getpid());//5642
}
else//Parent
{
printf("Parent process is running\n");
printf("Parent says: PID  of child process is: %d\n",RET);//5642
printf("Parent says: PID  of parent process is: %d\n",getpid());//5641
printf("Parent says: PID  of parent process of parent i.e terminal is: %d\n",getppid());//5362
}

return 0;
}
