#ifndef OPENMIXER_RING_BUFFER_H
#define OPENMIXER_RING_BUFFER_H

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>
#include <stdbool.h>

    typedef struct
    {
        int32_t *buffer;

        uint32_t size;

        volatile uint32_t head;

        volatile uint32_t tail;

    } om_ring_buffer_t;

    bool om_ring_buffer_init(
        om_ring_buffer_t *rb,
        int32_t *memory,
        uint32_t size);

    bool om_ring_buffer_push(
        om_ring_buffer_t *rb,
        int32_t sample);

    bool om_ring_buffer_pop(
        om_ring_buffer_t *rb,
        int32_t *sample);

    bool om_ring_buffer_empty(
        const om_ring_buffer_t *rb);

    bool om_ring_buffer_full(
        const om_ring_buffer_t *rb);

#ifdef __cplusplus
}
#endif

#endif /* OPENMIXER_RING_BUFFER_H */