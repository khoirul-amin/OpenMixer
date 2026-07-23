#ifndef OPENMIXER_TYPES_H
#define OPENMIXER_TYPES_H

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>

    typedef int32_t om_sample_t;

    typedef struct
    {
        uint8_t channels;
        om_sample_t sample[32];

    } om_audio_frame_t;

#ifdef __cplusplus
}
#endif

#endif