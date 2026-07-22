# Firmware

Firmware merupakan inti dari OpenMixer yang berjalan pada STM32H750.

Firmware bertanggung jawab sebagai USB Audio Interface dengan latensi rendah yang menjembatani ADC, DAC, dan Host (PC/Mini PC).

## Scope

- USB Audio Class 2.0
- Audio Streaming
- I2S / SAI
- DMA
- Clock Synchronization
- Board Support

## Directory Structure

```
firmware/
├── Core/
├── Drivers/
├── BSP/
├── USB/
├── Audio/
├── Middleware/
└── Tests/
```

## Development Language

- C (C17)
- STM32 HAL
- CMSIS
- TinyUSB

## Target

- STM32H750
- USB Audio Class 2.0
- 48kHz
- 24-bit
- Low Latency