#ifndef OPENMIXER_AUDIO_BUFFER_H
#define OPENMIXER_AUDIO_BUFFER_H

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>
#include <stdbool.h>

    bool om_audio_buffer_init(void);

    void om_audio_buffer_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* OPENMIXER_AUDIO_BUFFER_H */