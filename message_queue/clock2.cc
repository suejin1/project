#include "header.h"

bool checkDate(OP op, LN ln, P p);

int main()
{
  c_data data;
  stIpcMsg msg;

  data.q=time(0);

  data.key = ftok("progfile", 65);
  data.msgid = msgget(data.key, 0666 | IPC_CREAT);

  #pragma region 동작
  while(data.run==1)
  {
    printtime();

    printf("input : ");
    scanf("%d %d %d %d %d", &data.a, &data.b, &data.t1, &data.t2, &data.c);

    #pragma region enum
    enum OP op=(OP)data.a;
    enum LN ln=(LN)data.b;
    enum P p=(P)data.c;
    #pragma endregion
    #pragma region 대기
    printf("wait %d \n", data.t1*1);

    sleep(data.t1*1);
    #pragma endregion

    printf("%d \n", data.a);
    bool result = checkDate(op, ln, p);
    #pragma region 메시지
    if(result==true)
    {
      msg.opcode=(uint32_t) data.a;
      msg.LN=(uint32_t) data.b;
      msg.P=(uint32_t) data.c;

      msgsnd(data.msgid, &msg, sizeof(msg), 0);
      msgrcv(data.msgid, &msg, sizeof(msg), 0, 0);
      if(msg.opcode==1)
      {
        printf("OP: %x  LN: %x  StartTime: %x  EndTime: %x  pattern: %x \nend \n", msg.opcode, msg.LN, data.t1, data.t2, msg.P);
        return 0;
      }
      else if(msg.opcode==2)
      {
        printf("OP: %x  Interval: %x  Patter: %x  \nend \n", msg.opcode, msg.LN, msg.P);
      }
      
      //printf("%x %x %x \nend \n", msg.opcode, msg.LN, msg.P);
    }
    else printf("error \n");
    #pragma endregion

    printf("\nrun more?(0:stop / 1: run): \n");
    scanf("%d", &data.run);
    if(data.run==0) break;
  }
  #pragma endregion
  msgctl(data.msgid, IPC_RMID, NULL);
  return 0;

}

//시간은 아무거나 전달해서 테스트
//패턴이랑 다른 것만 전달해서 가능한지 보기
//시작 지정? 아니면 지금부터?
//현재 시간 받아와서 끝 시간은 현재+원하는 작동 시간
//입력 한 시간에서 몇 초 후에 시작 끝을 입력
// 30 15
// 입력+30 끝+15
// 타임 함수 시작+30 > 여기에 +15하면 끝나기
// n초 후 시작 m초 동안 작동
// op ln s e p
// 순서대로 다 입력하게 하기
// op로 뒤에 정
