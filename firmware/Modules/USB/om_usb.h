#ifndef OPENMIXER_USB_H
#define OPENMIXER_USB_H

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>

    bool om_usb_init(void);

    void om_usb_start(void);

    void om_usb_stop(void);

    void om_usb_task(void);

    bool om_usb_is_connected(void);

#ifdef __cplusplus
}
#endif

#endif /* OPENMIXER_USB_H */