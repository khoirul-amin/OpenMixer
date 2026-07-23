#ifndef OPENMIXER_AUDIO_H
#define OPENMIXER_AUDIO_H

#include <stdint.h>
#include <stdbool.h>

bool Audio_Init(void);

bool Audio_Start(void);

bool Audio_Stop(void);

void Audio_Task(void);

#endif