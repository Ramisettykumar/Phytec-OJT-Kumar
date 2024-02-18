/*
*  udpdaytimeclient.c: Client program connects to the daytime
*  service running on the ubuntuserver having ip 192.168.100.20
*  at port 13, receives the daytime and display it on stdout
*  compile: gcc udpdaytimeclient.c
*  usage: ./a.out <ip> 13
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h>
#include <string.h>
int main(int argc, char** argv){
  if(argc != 3){printf("Must enter IP and port of daytime server\n"); exit(1);}
//*** STEP-I:  Create a socket
   int sockfd = socket (PF_INET, SOCK_DGRAM, 0);
//*** STEP-II: Populate Socket's DS for remote IP and Port, and
//***          let the local IP and Port be selected by the OS itself
   struct sockaddr_in dest_addr;
   dest_addr.sin_family = AF_INET;    
   dest_addr.sin_port = htons(atoi(argv[2]));
   inet_aton(argv[1], &dest_addr.sin_addr);
   memset(&(dest_addr.sin_zero), '\0', sizeof dest_addr.sin_zero); 
//*** STEP-III: Use sendto() to send an empty message to the daytime server
   char str[10];
   sendto(sockfd, str, sizeof str, 0, (struct sockaddr*) &dest_addr, sizeof dest_addr);
//now i want to receive response from the server
   char buff[50];
   int addr_len = sizeof dest_addr;
   int rv = recvfrom(sockfd,buff,sizeof buff,0,(struct sockaddr*)&dest_addr,&addr_len);
   buff[rv] = '\0';
   printf("Time Received from Server is: %s", buff);
//*** STEP-IV:  Close socket
   close(sockfd);
   exit(0);
}
