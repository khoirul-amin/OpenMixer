#ifndef OPENMIXER_CONFIG_H
#define OPENMIXER_CONFIG_H

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>
#include <stdbool.h>

    /*==================================================
     * Firmware Version
     *==================================================*/

#define OM_FW_NAME "OpenMixer"

#define OM_FW_VERSION_MAJOR 0
#define OM_FW_VERSION_MINOR 1
#define OM_FW_VERSION_PATCH 0

    /*==================================================
     * Compile-Time Default Configuration
     *==================================================*/

#define OM_DEFAULT_SAMPLE_RATE 48000U
#define OM_DEFAULT_BIT_DEPTH 24U

#define OM_DEFAULT_INPUT_CHANNELS 2U
#define OM_DEFAULT_OUTPUT_CHANNELS 2U

#define OM_DEFAULT_BUFFER_SIZE 512U

#define OM_DEFAULT_USB_VENDOR_ID 0xCAFE
#define OM_DEFAULT_USB_PRODUCT_ID 0x4001

    /*==================================================
     * Runtime Configuration
     *==================================================*/

    typedef struct
    {
        uint32_t sample_rate;

        uint8_t input_channels;

        uint8_t output_channels;

        uint8_t bit_depth;

        uint16_t buffer_size;

    } om_audio_config_t;

    typedef struct
    {
        uint16_t vendor_id;

        uint16_t product_id;

        const char *manufacturer;

        const char *product;

    } om_usb_config_t;

    typedef struct
    {
        bool enable;

    } om_debug_config_t;

    typedef struct
    {
        om_audio_config_t audio;

        om_usb_config_t usb;

        om_debug_config_t debug;

    } om_config_t;

    /*==================================================
     * Public API
     *==================================================*/

    bool om_config_init(void);

    om_config_t *om_config_get(void);

#ifdef __cplusplus
}
#endif

#endif