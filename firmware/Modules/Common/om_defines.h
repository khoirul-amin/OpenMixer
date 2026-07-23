#ifndef OPENMIXER_DEFINES_H
#define OPENMIXER_DEFINES_H

#ifdef __cplusplus
extern "C"
{
#endif

#define OM_TRUE 1

#define OM_FALSE 0

#define OM_UNUSED(x) ((void)(x))

#define OM_ARRAY_SIZE(x) (sizeof(x) / sizeof((x)[0]))

#ifdef __cplusplus
}
#endif

#endif