#include <stdio.h>
#include <sys/socket.h>
#include <Inc/hello.h>

int hello(){
    int d;
    scanf("%d",&d);
    printf("%d\n",d*d);
    return 0;
}