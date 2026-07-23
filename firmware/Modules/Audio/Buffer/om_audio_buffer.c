#include "om_audio_buffer.h"
#include "om_config.h"

static int32_t s_input_buffer[OM_DEFAULT_BUFFER_SIZE];
static int32_t s_output_buffer[OM_DEFAULT_BUFFER_SIZE];

bool om_audio_buffer_init(void)
{
    om_audio_buffer_clear();
    return true;
}

void om_audio_buffer_clear(void)
{
    for (uint32_t i = 0; i < OM_DEFAULT_BUFFER_SIZE; i++)
    {
        s_input_buffer[i] = 0;
        s_output_buffer[i] = 0;
    }
}