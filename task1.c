#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>

int main() {
int msgid=msgget(55,IPC_CREAT|0666);
struct mes{
    char name[100];
    int marks;
    int rn;
}stu;
  
printf("Enter the student name: ");
scanf("%s",stu.name);
printf("enter student marks: ");
scanf("%d",&stu.marks);
printf("enter student roll number: ");
scanf("%d",&stu.rn);
msgsnd(msgid,&stu,sizeof(stu),0);
msgctl(msgid,IPC_RMID,NULL);
exit(1);
}
