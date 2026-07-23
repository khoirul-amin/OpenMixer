#include "om_double_buffer.h"

static uint8_t s_active_buffer = 0;

void om_double_buffer_init(void)
{
    s_active_buffer = 0;
}

void om_double_buffer_swap(void)
{
    s_active_buffer ^= 1U;
}

uint8_t om_double_buffer_active(void)
{
    return s_active_buffer;
}