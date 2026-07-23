#include "om_config.h"

static om_config_t config;

bool om_config_init(void)
{
    config.audio.sample_rate = OM_DEFAULT_SAMPLE_RATE;
    config.audio.bit_depth = OM_DEFAULT_BIT_DEPTH;

    config.audio.input_channels = OM_DEFAULT_INPUT_CHANNELS;
    config.audio.output_channels = OM_DEFAULT_OUTPUT_CHANNELS;

    config.audio.buffer_size = OM_DEFAULT_BUFFER_SIZE;

    config.usb.vendor_id = OM_DEFAULT_USB_VENDOR_ID;
    config.usb.product_id = OM_DEFAULT_USB_PRODUCT_ID;

    config.usb.manufacturer = "OpenMixer";
    config.usb.product = "OpenMixer Audio Interface";

    config.debug.enable = true;

    return true;
}

om_config_t *om_config_get(void)
{
    return &config;
}