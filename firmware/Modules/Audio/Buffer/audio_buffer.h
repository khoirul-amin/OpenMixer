#ifndef AUDIO_BUFFER_H
#define AUDIO_BUFFER_H

#include <stdint.h>
#include <stdbool.h>

#define AUDIO_BUFFER_SIZE 512

bool audio_buffer_init(void);

void audio_buffer_clear(void);

#endif