#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int gvar=555;
int main()
{
  int lvar=54;
  int cpid=fork();
  if(cpid==0)
    printf("I am Child process with PID=%ld,gvar=%d,lvar=%d a\n",(long)getpid(),gvar,lvar);
  else
    printf("I am Parent process with PID=%ld,gvar=%d,lvar=%d\n",(long)getpid(),gvar,lvar);
   return 0;
}
