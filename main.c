#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <Inc/hello.h>
#include <mysql.h>
 MYSQL *mysql;
 MYSQL_ROW ret_rownum;
 MYSQL_RES* res;
const char *host="127.0.0.1";
const char *user="my_data";
const char *passwd="asd1257.";
const char *db="my_data";
int retnum=0;
MYSQL_ROW row;
void connectdb()
 {
     mysql=mysql_init(NULL);
     if(!mysql_real_connect(mysql, host,user, passwd,db, 3306,NULL,0))
     {
         printf("hell~no\n");
     }
     mysql_query(mysql,"set names utf-8");

     const char* querystat ="select * from user";
     while (1)
     {
             mysql_real_query(mysql,querystat,strlen(querystat));
             res=mysql_store_result(mysql);
             row=mysql_fetch_row(res);
             printf("mapping rows %s\n",row[0]);
             row=mysql_fetch_row(res);
             printf("mapping rows %s\n",row[0]);
             mysql_free_result(res);
             usleep(1000);
             break;
     }
     

 }

int main(){
    connectdb();

    int k;
    scanf("%d",&k);
    printf("hello %d\n",k);
    return 0;
}