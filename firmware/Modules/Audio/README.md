# Audio

Folder Audio bertanggung jawab terhadap streaming audio.

Audio tidak melakukan DSP.

Audio hanya mengelola perpindahan data antara:

ADC

↓

DMA

↓

USB

↓

Host

↓

USB

↓

DMA

↓

DAC

## Responsibility

- Audio Buffer
- Ring Buffer
- Audio Routing
- Synchronization

## Out of Scope

- Equalizer
- Compressor
- Limiter
- Reverb
- Delay

Semua audio processing dilakukan oleh DAW.