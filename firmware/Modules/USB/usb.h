#ifndef OPENMIXER_USB_H
#define OPENMIXER_USB_H

#include <stdbool.h>

bool usb_init(void);

void usb_start(void);

void usb_stop(void);

void usb_task(void);

bool usb_is_connected(void);

#endif