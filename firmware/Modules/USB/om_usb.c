#include "om_usb.h"

#include "om_usb_audio.h"
#include "om_usb_cdc.h"
#include "om_usb_control.h"
#include "om_usb_device.h"
#include "om_usb_stream.h"

static bool s_connected = false;

bool om_usb_init(void)
{
    if (!om_usb_device_init())
    {
        return false;
    }

    om_usb_control_init();

    om_usb_stream_init();

    om_usb_audio_init();

    om_usb_cdc_init();

    s_connected = false;

    return true;
}

void om_usb_start(void)
{
    om_usb_device_start();

    s_connected = true;
}

void om_usb_stop(void)
{
    om_usb_device_stop();

    s_connected = false;
}

bool om_usb_is_connected(void)
{
    return s_connected;
}

void om_usb_task(void)
{
    om_usb_control_task();

    om_usb_stream_task();

    om_usb_audio_task();

    om_usb_cdc_task();
}