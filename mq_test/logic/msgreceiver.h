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

void msgreceiver()
{
long qsize;
string nextmsg;

  while(true){
    if(msgq.empty()){
      usleep(10000); // sleep 0.01 sec before trying again
      continue;
    }

    // we end up here because there was something in the msg queue
    pthread_mutex_lock(&msgmutex);
    qsize=msgq.size();
    if(qsize > 5)cout << "Queue size: " << qsize << endl;
    nextmsg=msgq.front(); // get next message in queue
    msgq.pop(); // remove it from the queue
    pthread_mutex_unlock(&msgmutex);

    cout << "Processing value " << nextmsg << endl;
    usleep(2000000);
  }
  pthread_exit((void *)0);
} // msgreceiver()

