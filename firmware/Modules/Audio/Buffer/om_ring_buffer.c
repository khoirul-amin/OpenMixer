#include "om_ring_buffer.h"

bool om_ring_buffer_init(
    om_ring_buffer_t *rb,
    int32_t *memory,
    uint32_t size)
{
    rb->buffer = memory;
    rb->size = size;
    rb->head = 0;
    rb->tail = 0;

    return true;
}

bool om_ring_buffer_empty(
    const om_ring_buffer_t *rb)
{
    return rb->head == rb->tail;
}

bool om_ring_buffer_full(
    const om_ring_buffer_t *rb)
{
    return ((rb->head + 1U) % rb->size) == rb->tail;
}

bool om_ring_buffer_push(
    om_ring_buffer_t *rb,
    int32_t sample)
{
    if (om_ring_buffer_full(rb))
        return false;

    rb->buffer[rb->head] = sample;

    rb->head = (rb->head + 1U) % rb->size;

    return true;
}

bool om_ring_buffer_pop(
    om_ring_buffer_t *rb,
    int32_t *sample)
{
    if (om_ring_buffer_empty(rb))
        return false;

    *sample = rb->buffer[rb->tail];

    rb->tail = (rb->tail + 1U) % rb->size;

    return true;
}