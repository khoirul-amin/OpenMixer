#include "audio_buffer.h"

static int32_t input_buffer[AUDIO_BUFFER_SIZE];

static int32_t output_buffer[AUDIO_BUFFER_SIZE];

bool audio_buffer_init(void)
{
    audio_buffer_clear();

    return true;
}

void audio_buffer_clear(void)
{
    for (uint32_t i = 0; i < AUDIO_BUFFER_SIZE; i++)
    {
        input_buffer[i] = 0;
        output_buffer[i] = 0;
    }
}