#pragma once

#include "header.h"

#define IPC_DATA_MAX_SIZE 10

typedef struct {
  long			mtype;          //64bit = 8Byte
  uint32_t      opcode; //unsigned long 32비트 4바이트
  uint32_t      LN;
  uint32_t      P;

  uint32_t      data_size; //unsigned long 32비트 4바이트
  uint8_t	    data[IPC_DATA_MAX_SIZE];  //unsigned char 8바이트 1비트
} stIpcMsg;

typedef enum OP{  OPCODE_LED = 1, OPCODE_TEMP, OPCODE_GPS } op;
typedef enum LN{ LN_1 =1, LN_2, LN_3, LN_4, LN_5 } ln;
typedef enum P{  P_1=1, P_2, P_3 } p;

typedef struct c_data data;

class c_data {
  public:

  int a, b, c, t2, i;
  int t1;
  double start, end;
  int run=1;

  key_t key;
  int msgid;

  time_t timer;
  time_t q;
  struct tm* t;
};