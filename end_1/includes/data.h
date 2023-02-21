#pragma once

#define IPC_DATA_MAX_SIZE 10

enum UI_INSERT{
  UI_LED = 0,
  UI_TEMP,
  UI_GPS
};

class UI_MAIN
{
  public:

  UI_MAIN(){};
  int insert;
  void main_ui_init(UI_INSERT type);
};

class stIpcMsg{
  public:

  long			mtype;          //64bit = 8Byte
  uint32_t      opcode; //unsigned long 32비트 4바이트
  uint32_t      LN;
  uint32_t      P;
  uint32_t      S;
  uint32_t      E;

  uint32_t      data_size; //unsigned long 32비트 4바이트
  uint8_t	    data[IPC_DATA_MAX_SIZE];  //unsigned char 8바이트 1비트
};

enum OP{  OPCODE_LED = 1, OPCODE_TEMP, OPCODE_GPS } op;
enum LN{ LN_1 =1, LN_2, LN_3, LN_4, LN_5 } ln;
enum P{  P_1=1, P_2, P_3 } p;
enum Time{  S, E } t;

class c_data{
  public:
  char opcode1, LedNum1, patter1;
  int opcode, LedNum, patter, i;
};

class stmq {

  public:
  key_t key;
  int msgid;
};

class sttime{
  public:
  int StartTime, EndTime;


  time_t timer;
  struct tm* t;
};

extern c_data data;
extern stIpcMsg msg;
extern stmq mq;
extern sttime timer;