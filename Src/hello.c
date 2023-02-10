#include <stdio.h>
#include <sys/socket.h>
#include <Inc/hello.h>
#include <mysql.h>

int hello(){
    int d;
    scanf("%d",&d);
    printf("%d\n",d*d);
    return 0;
}