# USB Module

This module contains every USB-related functionality used by OpenMixer.

## Architecture

```
usb.c
    |
    +-- usb_device
    +-- usb_control
    +-- usb_stream
    +-- usb_audio
    +-- usb_cdc
```

## Responsibilities

- USB Peripheral
- USB Enumeration
- USB CDC
- USB Audio Class 2.0
- Isochronous Streaming
- Descriptor Management
- Endpoint Management

## Current Progress

- [x] Module Structure
- [x] Public API
- [ ] TinyUSB Integration
- [ ] USB CDC
- [ ] USB Audio
- [ ] Audio Streaming
- [ ] USB Audio Class 2.0 Compliance