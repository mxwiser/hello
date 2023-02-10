#include <stdio.h>
#include <Inc/hello.h>
#include <mysql.h>




int main(){
    MYSQL *conn;

     conn=mysql_init(NULL);

    if (conn == NULL) { // 如果返回NULl说明初始化失败

    printf("mysql_init failed!\n");
    }

    int k;
    scanf("%d",&k);
    printf("hello %d\n",k);
    return 0;
}