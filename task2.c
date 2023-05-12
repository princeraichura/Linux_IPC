#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>

int main() {
int msgid = msgget(55,IPC_CREAT|0666); 
  struct mes{
    char name[1024];
    int marks;
    int rn;
  }stu;

int rd=msgrcv(msgid,&stu,sizeof(stu),0,0);
printf("The student record is: %s,%d,%d\n",stu.name,stu.marks,stu.rn);
msgctl(msgid,IPC_RMID,NULL);
exit(1);
  
}

