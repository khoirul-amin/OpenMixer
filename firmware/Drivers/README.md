# Drivers

Drivers berisi implementasi peripheral STM32.

Folder ini hanya menghubungkan firmware dengan hardware STM32.

## Responsibility

- GPIO
- DMA
- SAI / I2S
- USB
- SPI
- I2C
- UART
- Timer

## Rules

Driver tidak boleh berisi business logic.

Driver hanya menyediakan API terhadap peripheral STM32.

## Example

```
Drivers/

GPIO

DMA

SAI

USB
```