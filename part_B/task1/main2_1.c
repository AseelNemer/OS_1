#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void print(const char *text)
{
    int i;
    for (i=0 ;i<20;i++)
    {
        printf("hello from %s\n ",text);
        usleep(1000000);
    }
}
int main()
{
    
    pid_t pid=fork();
    if(pid==0)
    {
        pid_t pid =fork();
        if(pid ==0)
        {
           print("prosses 2");
           
        }
        else
            {print("prosses 1");}
    }
    else    {print("App");}

  return 0;
}