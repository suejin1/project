#include <iostream>
#include <cstdlib>
#include <unistd.h>	// usleep
#include <fcntl.h>	// threads
#include <pthread.h>  //  https://idea-sketch.tistory.com/4
#include <string>	// messages
#include <queue>	// the message queue

using namespace std;

pthread_mutex_t msgmutex = PTHREAD_MUTEX_INITIALIZER;

queue<string> msgq;

class MSG_Transmitter{
 
  void msgtransmitter();
};

void msgtransmitter()
{
  string nextmsg;

  while(true){
    cin >> nextmsg;
    pthread_mutex_lock(&msgmutex);
    msgq.push(nextmsg); // push message onto the queue
    pthread_mutex_unlock(&msgmutex);
  }
  pthread_exit((void *)0);
} // msgtransmitter()

