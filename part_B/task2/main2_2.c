#define _GNU_SOURCE
#include <sched.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


#define STACK_SIZE 10000
#define CYCLES 1000
char child_stack[STACK_SIZE+1];

void print(const char*);
int child(void*);

void print(const char *text)
{
    int i;
    for (i=0;i<CYCLES;i++)
    {
        printf("hello from %s\n ",text);
        usleep (1000000);
    }

}

int child(void *params )
{
    print("child_thread ");

}

int main()
{
    int result =clone(child ,child_stack+STACK_SIZE,CLONE_PARENT,0);
    int result1 =clone(child,child_stack+STACK_SIZE,CLONE_PARENT,0);
    printf("CLONE RESULT =%d\n",result);
    print ("parent");
    return 0;
}