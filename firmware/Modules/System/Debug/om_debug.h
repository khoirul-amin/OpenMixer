#ifndef OPENMIXER_DEBUG_H
#define OPENMIXER_DEBUG_H

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>

    /*==================================================
     * Debug Configuration
     *==================================================*/

#define OM_DEBUG_ENABLE 1

    /*==================================================
     * Log Level
     *==================================================*/

    typedef enum
    {
        OM_DEBUG_LEVEL_INFO = 0,

        OM_DEBUG_LEVEL_WARN,

        OM_DEBUG_LEVEL_ERROR

    } om_debug_level_t;

    /*==================================================
     * Public API
     *==================================================*/

    bool om_debug_init(void);

    void om_debug_log(
        om_debug_level_t level,
        const char *message);

    /*==================================================
     * Shortcut Macros
     *==================================================*/

#define OM_LOG_INFO(msg) \
    om_debug_log(OM_DEBUG_LEVEL_INFO, msg)

#define OM_LOG_WARN(msg) \
    om_debug_log(OM_DEBUG_LEVEL_WARN, msg)

#define OM_LOG_ERROR(msg) \
    om_debug_log(OM_DEBUG_LEVEL_ERROR, msg)

#ifdef __cplusplus
}
#endif

#endif /* OPENMIXER_DEBUG_H */