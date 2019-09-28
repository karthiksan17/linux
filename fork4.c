#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc,char *argv[])
{
  if(argc!=2)
  {
    //printf("must enter one argument (an interger)\n");
    //exit(1);
     fprintf(stderr,"incorrect number of arguments.  Pl pass one integer\n");
      return 1;

   }
  int n=atoi(argv[1]);
   int i;
   for(i=1;i<=n;i++)
      if(fork()!=0)
         break;
      fprintf(stderr,"PID=%ld,PPID=%ld\n",(long)getpid(),(long)getppid());
    while(1);

     //fork();
//   printf("PUCIT\n");
  //exit(0);
   return 0;
}
