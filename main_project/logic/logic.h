#include "../includes/common.h"

class logic{
public:


int led_init;
int temp_init;
int gps_init;

void led_proc(OPCODE_TYPE type);
void temp_proc(OPCODE_TYPE type);
void gps_proc(OPCODE_TYPE type);
};
