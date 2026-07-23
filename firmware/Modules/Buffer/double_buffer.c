#include "double_buffer.h"

static uint8_t active_buffer = 0;

void double_buffer_init(void)
{
    active_buffer = 0;
}

void double_buffer_swap(void)
{
    active_buffer ^= 1;
}