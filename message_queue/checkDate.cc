#include "header.h"

bool checkDate(enum OP op, enum LN ln, enum P p)
{
  c_data data;
  stIpcMsg msg;
  
  #pragma region  LED
	if ( op==OPCODE_LED)
	{
    #pragma region  LN1
    if(ln==LN_1)
    {
      if(p==P_1)
      {
        return true;
      }
      else if(p==P_2)
      {
        return true;
      }
      else if(p==P_3)
      {
        return true;
      }
      else
      {
        printf("pattern error \n");
        return false;
      }
    }
    #pragma endregion#pragma region  LN2
    #pragma region  LN2
    if(ln==LN_2)
    {
      if(p==P_1)
      {
        return true;
      }
      else if(p==P_2)
      {
        return true;
      }
      else if(p==P_3)
      {
        return true;
      }
      else
      {
        printf("pattern error \n");
        return false;
      }
    }
    #pragma endregion
    #pragma region  LN3
    if(ln==LN_3)
    {
      if(p==P_1)
      {
        return true;
      }
      else if(p==P_2)
      {
        return true;
      }
      else if(p==P_3)
      {
        return true;
      }
      else
      {
        printf("pattern error \n");
        return false;
      }
    }
    #pragma endregion
    #pragma region  LN4
    if(ln==LN_4)
    {
      if(p==P_1)
      {
        return true;
      }
      else if(p==P_2)
      {
        return true;
      }
      else if(p==P_3)
      {
        return true;
      }
      else
      {
        printf("pattern error \n");
        return false;
      }
    }
    #pragma endregion
    #pragma region  LN5
    if(ln==LN_5)
    {
      if(p==P_1)
      {
        return true;
      }
      else if(p==P_2)
      {
        return true;
      }
      else if(p==P_3)
      {
        return true;
      }
      else
      {
        printf("pattern error \n");
        return false;
      }
    }
    #pragma endregion
    else
    {
      printf("Led Num error \n");
      return false;
    }
  }
  #pragma endregion

  #pragma region  TEMP
  else if(op==OPCODE_TEMP)
  {
    printf("TEMP Start \n");
    return true;
  }
  #pragma endregion

  #pragma region  GPS
  else if(op==OPCODE_GPS)
  {
    printf("GPS Start \n");
    return true;
  }
	else 
  {
		return false;
	}
  #pragma endregion
}