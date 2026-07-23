#ifndef OPENMIXER_USB_DEVICE_H
#define OPENMIXER_USB_DEVICE_H

#include <stdbool.h>

bool om_usb_device_init(void);

void om_usb_device_start(void);

void om_usb_device_stop(void);

#endif