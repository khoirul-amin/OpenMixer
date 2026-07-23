#include "debug.h"

#include <stdio.h>

bool debug_init(void)
{
    return true;
}

void debug_log(debug_level_t level, const char *message)
{
#if DEBUG_ENABLE

    const char *prefix = "";

    switch (level)
    {
    case DEBUG_LEVEL_INFO:
        prefix = "[INFO ]";
        break;

    case DEBUG_LEVEL_WARN:
        prefix = "[WARN ]";
        break;

    case DEBUG_LEVEL_ERROR:
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