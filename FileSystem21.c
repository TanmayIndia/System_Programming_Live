#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>

#pragma pack(1)
struct student
{
int Rollno;
char Sname[20];
float Marks;
int Age;
};

int main(int argc,char * argv[])
{
struct student sobj;
int fd=0;
char fname[20];

printf("Enter the file name\n");
scanf("%s",fname);

fd=open(fname,O_RDONLY);

read(fd,&sobj,sizeof(sobj));

printf("Roll no:%d\n",sobj.Rollno);
printf("Name no:%s\n",sobj.Sname);
printf("Marks :%f\n",sobj.Marks);
printf("Age:%d\n",sobj.Age);


return 0;
}
