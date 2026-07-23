#ifndef OPENMIXER_STATUS_H
#define OPENMIXER_STATUS_H

#ifdef __cplusplus
extern "C"
{
#endif

    typedef enum
    {
        OM_STATUS_OK = 0,

        OM_STATUS_ERROR,

        OM_STATUS_BUSY,

        OM_STATUS_TIMEOUT,

        OM_STATUS_INVALID_ARGUMENT,

        OM_STATUS_NOT_INITIALIZED,

        OM_STATUS_NOT_SUPPORTED

    } om_status_t;

#ifdef __cplusplus
}
#endif

#endif /* OPENMIXER_STATUS_H */