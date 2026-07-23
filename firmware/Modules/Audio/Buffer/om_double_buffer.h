#ifndef OPENMIXER_DOUBLE_BUFFER_H
#define OPENMIXER_DOUBLE_BUFFER_H

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>

    void om_double_buffer_init(void);

    void om_double_buffer_swap(void);

    uint8_t om_double_buffer_active(void);

#ifdef __cplusplus
}
#endif

#endif /* OPENMIXER_DOUBLE_BUFFER_H */