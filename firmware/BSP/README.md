# BSP (Board Support Package)

BSP menghubungkan firmware dengan hardware OpenMixer.

Semua IC eksternal berada di folder ini.

## Modules

- PCM1808
- PCM5102
- Future ADC
- Future DAC

## Responsibility

- Initialization
- Configuration
- Register Access
- Codec Control

## Rules

BSP tidak boleh mengetahui USB maupun Audio Engine.

BSP hanya mengetahui cara mengendalikan hardware.