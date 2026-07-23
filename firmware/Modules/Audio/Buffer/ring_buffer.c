#include "ring_buffer.h"

bool ring_buffer_init(
    ring_buffer_t *rb,
    int32_t *memory,
    uint32_t size)
{
    rb->buffer = memory;
    rb->size = size;
    rb->head = 0;
    rb->tail = 0;

    return true;
}

bool ring_buffer_empty(
    ring_buffer_t *rb)
{
    return rb->head == rb->tail;
}

bool ring_buffer_full(
    ring_buffer_t *rb)
{
    return ((rb->head + 1) % rb->size) == rb->tail;
}

bool ring_buffer_push(
    ring_buffer_t *rb,
    int32_t sample)
{
    if (ring_buffer_full(rb))
        return false;

    rb->buffer[rb->head] = sample;

    rb->head = (rb->head + 1) % rb->size;

    return true;
}

bool ring_buffer_pop(
    ring_buffer_t *rb,
    int32_t *sample)
{
    if (ring_buffer_empty(rb))
        return false;

    *sample = rb->buffer[rb->tail];

    rb->tail = (rb->tail + 1) % rb->size;

    return true;
}