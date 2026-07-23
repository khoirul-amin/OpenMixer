#include "usb.h"

#include "usb_device.h"
#include "usb_control.h"
#include "usb_stream.h"
#include "usb_audio.h"
#include "usb_cdc.h"

static bool connected = false;

bool usb_init(void)
{
    if (!usb_device_init())
        return false;

    usb_control_init();

    usb_stream_init();

    usb_audio_init();

    usb_cdc_init();

    connected = false;

    return true;
}

void usb_start(void)
{
    usb_device_start();

    connected = true;
}

void usb_stop(void)
{
    usb_device_stop();

    connected = false;
}

bool usb_is_connected(void)
{
    return connected;
}

void usb_task(void)
{
    usb_control_task();

    usb_stream_task();

    usb_audio_task();

    usb_cdc_task();
}