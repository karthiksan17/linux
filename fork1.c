#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
  int cpid=fork();
  if(cpid==0)
   // printf("Hello I am child\n");
   while(1)
     putchar('x');

  else
    //printf("Hello I am parent\n");
   while(1)
      putc('o',stdout);
  return 0;
}
