#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdio.h>
int main()
{ 
printf("the project was done by kuang jie long + 18040031009\n");
printf("😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️\n");
printf("😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️\n");
printf("😇️😇️                        😇️😇️\n");
printf("😇️😇️  😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️\n");
printf("😇️😇️  😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️\n");
printf("😇️😇️  😇️                😇️😇️😇️😇️\n");
printf("😇️😇️  😇️😇️😇️😇️  😇️😇️😇️😇️😇️😇️😇️😇️\n");
printf("😇️😇️  😇️😇️😇️😇️  😇️😇️😇️😇️😇️😇️😇️😇️\n");
printf("😇️😇️  😇️                😇️😇️😇️😇️\n");
printf("😇️😇️  😇️😇️😇️😇️  😇️😇️😇️😇️😇️😇️😇️😇️\n");
printf("😇️😇️  😇️😇️😇️😇️  😇️😇️😇️😇️😇️😇️😇️😇️\n");
printf("😇️😇️  😇️                😇️😇️😇️😇️\n");
printf("😇️😇️  😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️\n");
printf("😇️😇️  😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️\n");
printf("😇️😇️                        😇️😇️\n");
printf("😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️\n");
printf("😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️\n");
printf("😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️😇️\n");

  pid_t pid;
  int status,i;
  if(fork()==0){
    printf("This is the child process .pid =%d\n",getpid());
    exit(5);
  }
  else{
    sleep(1);
    printf("This is the parent process ,wait for child...\n");
    pid=wait(&status);
    i=WEXITSTATUS(status);
    printf("child’s pid =%d .exit status=%d\n",pid,i);
  }
}
