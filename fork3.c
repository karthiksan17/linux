#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
   int i,ctr=0;
   int cpid=fork();
   if(cpid==0){

     ctr=100;
     for(i=0;i<3;i++)
        printf("child counter is :%d\n",ctr++);
   }
   else{
     for(i=0;i<3;i++)
    printf("parent counter is :%d\n",ctr++);
   }
   return 0;
}
  
