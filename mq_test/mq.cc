#include <iostream>
#include <cstdlib>
#include <unistd.h>	// usleep
#include <fcntl.h>	// threads
#include <pthread.h>  //  https://idea-sketch.tistory.com/4
#include <string>	// messages
#include <queue>	// the message queue

#include "msgtransmitter.h"
#include "msgreceiver.h"

using namespace std;

pthread_mutex_t msgmutex = PTHREAD_MUTEX_INITIALIZER;

queue<string> msgq;

int main(int argc, char **argv)
{
pthread_t thr;

  // Create threads
  if(pthread_create(&thr,NULL,msgreceiver,NULL) ||
     pthread_create(&thr,NULL,MSG_Transmitter::msgtransmitter,NULL))
  {
    cout << argv[0] << " cannot make thread\n";
    exit(1);
  }

  /*
   * At this point the main thread can perform its actions or end
   */
  cout << "** Main thread ends **\n";
  pthread_exit((void *)0);

} // main()
