# ADR-0003

## Decision

OpenMixer tidak melakukan DSP pada firmware STM32.

## Reason

- Mengurangi kompleksitas firmware.
- Menurunkan penggunaan CPU.
- Mempermudah debugging.
- Memanfaatkan DAW sebagai audio processing engine.

## Consequence

Firmware hanya bertanggung jawab terhadap Audio I/O.