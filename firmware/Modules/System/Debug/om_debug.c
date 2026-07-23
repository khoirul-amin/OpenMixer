#include "om_debug.h"

#include <stdio.h>

bool om_debug_init(void)
{
    return true;
}

void om_debug_log(
    om_debug_level_t level,
    const char *message)
{
#if OM_DEBUG_ENABLE

    const char *prefix = "";

    switch (level)
    {
    case OM_DEBUG_LEVEL_INFO:
        prefix = "[INFO ]";
        break;

    case OM_DEBUG_LEVEL_WARN:
        prefix = "[WARN ]";
        break;

    case OM_DEBUG_LEVEL_ERROR:
        prefix = "[ERROR]";
        break;

    default:
        prefix = "[UNKWN]";
        break;
    }

    printf("%s %s\n", prefix, message);

#else

    (void)level;
    (void)message;

#endif
}