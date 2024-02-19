#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
int Ret=0;

Ret= fork();
if(Ret==0)//Child
{
execl("./childprocess","Demo","Hello",NULL);//l for list
}
else//Parent
{
printf("Parent is running with PID: %d\n",getpid());
}
return 0;
}
