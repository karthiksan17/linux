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
   pid_t cpid;
   int n=atoi(argv[1]);
   int i;
   for(i=1;i<=n;i++){
     fork();
   
}

   fprintf(stderr,"PID=%ld,PPID=%ld\n",(long)getpid(),(long)getppid());
   while(1);


   
  
   return 0;
}
