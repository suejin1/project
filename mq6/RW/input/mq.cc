#include <iostream>
#include "includes/mq.h"
#include <string.h>
#define MAX 10

using namespace std;

// // structure for message queue
struct mesg_buffer {
    long mesg_type;
    char mesg_text[100];
} message;

//R W 공통 부분
class mq
{
    public:

        key_t key;
        int msgid;

        key = ftok("progfile", 65);

        msgid = msgget(key, 0666 | IPC_CREAT);


}

//W만 있는 부분
int wr()
{
    message.mesg_type = 1;
    //printf("Choose Commands: led, temp, gps \nyou : ");
    fgets(message.mesg_text,MAX,stdin);
    msgsnd(msgid, &message, sizeof(message), 0);
}

int re()
{
    msgrcv(msgid, &message, sizeof(message), 1, 0);
    printf("Data Received is : %s \n", message.mesg_text);

}

// // C Program for Message Queue (Writer Process)
// int main()
// {
//     key_t key;
//     int msgid;
  
//     // ftok to generate unique key
//     key = ftok("progfile", 65);
  
//     // msgget creates a message queue
//     // and returns identifier
//     msgid = msgget(key, 0666 | IPC_CREAT);
//     message.mesg_type = 1;
  
//     printf("Choose Commands: led, temp, gps \nyou : ");
//     fgets(message.mesg_text,MAX,stdin);
  
//     // msgsnd to send message
//     msgsnd(msgid, &message, sizeof(message), 0);
// }

// // C Program for Message Queue (Reader Process)


// #include <stdio.h>
// #include <sys/ipc.h>
// #include <sys/msg.h>

// #include <string.h>
  
// // structure for message queue
// struct mesg_buffer {
//     long mesg_type;
//     char mesg_text[100];
// } message;
  
// int main()
// {
//     key_t key;
//     int msgid;

//     // ftok to generate unique key
//     key = ftok("progfile", 65);
  
//     // msgget creates a message queue
//     // and returns identifier
//     msgid = msgget(key, 0666 | IPC_CREAT);
  
//     // msgrcv to receive message
//     msgrcv(msgid, &message, sizeof(message), 1, 0);
  
//     // display the message
//     printf("Data Received is : %s \n", 
//                     message.mesg_text);
// }