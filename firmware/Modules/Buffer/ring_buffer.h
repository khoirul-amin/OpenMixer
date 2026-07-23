#ifndef RING_BUFFER_H
#define RING_BUFFER_H

#include <stdint.h>
#include <stdbool.h>

typedef struct
{
    int32_t *buffer;

    uint32_t size;

    volatile uint32_t head;

    volatile uint32_t tail;

} ring_buffer_t;

bool ring_buffer_init(
    ring_buffer_t *rb,
    int32_t *memory,
    uint32_t size);

bool ring_buffer_push(
    ring_buffer_t *rb,
    int32_t sample);

bool ring_buffer_pop(
    ring_buffer_t *rb,
    int32_t *sample);

bool ring_buffer_empty(
    ring_buffer_t *rb);

bool ring_buffer_full(
    ring_buffer_t *rb);

#endif