// // C Program for Message Queue (Writer Process)

#ifndef _MQ_H_
#define _MQ_H_

class MQ
{
    private:
    long mesg_type;
    char mesg_text[100];


    public:

    void mq();
};

void mq()
{
    key_t key;s
    int msgid;

    key = ftok("progfile", 65);

    msgid = msgget(key, 0666 | IPC_CREAT);
}

#endif

//-------------
// #include <stdio.h>
// #include <sys/ipc.h>
// #include <sys/msg.h>


// #define MAX 10

// #include <string.h>
  
// // structure for message queue
// struct mesg_buffer {
//     long mesg_type;
//     char mesg_text[100];
// } message;
  
// //R W 공통 부분
// int mq()
// {
//     key_t key;
//     int msgid;

//     key = ftok("progfile", 65);

//     msgid = msgget(key, 0666 | IPC_CREAT);


// }
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


#endif