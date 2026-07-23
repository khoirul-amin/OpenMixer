#ifndef OPENMIXER_DEBUG_H
#define OPENMIXER_DEBUG_H

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>

/* Enable / Disable Debug Output */
#define DEBUG_ENABLE 1

    /* Log Levels */
    typedef enum
    {
        DEBUG_LEVEL_INFO = 0,
        DEBUG_LEVEL_WARN,
        DEBUG_LEVEL_ERROR

    } debug_level_t;

    /* Public API */

    bool debug_init(void);

    void debug_log(debug_level_t level, const char *message);

/* Shortcut Macros */
#define LOG_INFO(msg) debug_log(DEBUG_LEVEL_INFO, msg)
#define LOG_WARN(msg) debug_log(DEBUG_LEVEL_WARN, msg)
#define LOG_ERROR(msg) debug_log(DEBUG_LEVEL_ERROR, msg)

#ifdef __cplusplus
}
#endif

#endif /* OPENMIXER_DEBUG_H */