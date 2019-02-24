#include "tcp.h"


void SendBuff(char * sendline){
       char *servInetAddr = "192.168.0.12";
       int socketfd;
       struct sockaddr_in sockaddr;
       //char recvline[MAXLINE], sendline[MAXLINE];

       int n;

       //strcpy (sendline,"12123123123");
       socketfd = socket(AF_INET,SOCK_STREAM,0);
       memset(&sockaddr,0,sizeof(sockaddr));
       sockaddr.sin_family = AF_INET;
       sockaddr.sin_port = htons(10004);
       inet_pton(AF_INET,servInetAddr,&sockaddr.sin_addr);
       if((connect(socketfd,(struct sockaddr*)&sockaddr,sizeof(sockaddr))) < 0 )
       {
               printf("connect error %s errno: %d\n",strerror(errno),errno);
               exit(0);
       }

       //fgets(sendline,1024,stdin);

       if((send(socketfd,sendline,strlen(sendline),0)) < 0)
       {
               printf("send mes error: %s errno : %d",strerror(errno),errno);
               exit(0);
       }

       close(socketfd);
       //exit(0);
}
