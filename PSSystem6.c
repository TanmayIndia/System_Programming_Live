#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
fork();

printf("Hello: %d %d\n",getpid(),getppid());

return 0;
}
