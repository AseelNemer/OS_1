#include <stdio.h>
#include <unistd.h>
#include <sched.h>
#include <syslog.h>




int main()
{
pid_t demon = fork();

if(demon == 0 )
{
    printf("we are in the demon child ");
    chdir("/");

    
    setsid();

    printf("start to demon");

    close(stdout);
    close(stderr);
    close(stdin);

    //open demon log

    openlog("the demon " , LOG_PID , LOG_DAEMON);
    syslog(LOG_NOTICE , " DEMON HAS STRT ");
    usleep(50000000000);
    syslog(LOG_NOTICE , "DEMON IN PROSSES");
    usleep(50000000);
    syslog(LOG_NOTICE , "DEMON FINISH");
}
else printf(" the demon is father with pid number of : %d" , demon);

    return  0 ;

}
