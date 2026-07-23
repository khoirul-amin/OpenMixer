# Config Module

Modul **Config** menyimpan seluruh konfigurasi global firmware OpenMixer.

Seluruh nilai konfigurasi harus didefinisikan di modul ini agar mudah dikelola dan tidak tersebar di berbagai file.

---

## Struktur

```
Config/
├── om_config.c
├── om_config.h
└── README.md
```

---

## Configuration Groups

### Firmware

- Nama firmware
- Versi firmware

### Audio

- Sample Rate
- Bit Depth
- Jumlah Input
- Jumlah Output
- Buffer Size

### USB

- Vendor ID
- Product ID
- Manufacturer
- Product Name

### Debug

- Enable / Disable Debug

---

## Coding Rules

- Jangan menggunakan magic number pada modul lain.
- Semua konfigurasi global harus berasal dari `om_config.h`.
- Gunakan prefix `OM_` untuk seluruh konstanta.

---

## Contoh

```c
uint32_t sample_rate = OM_AUDIO_SAMPLE_RATE;

uint32_t channels = OM_AUDIO_INPUT_CHANNELS;
```

---

## Future Development

Ke depan modul ini dapat dikembangkan untuk mendukung:

- Runtime Configuration
- EEPROM
- Flash Storage
- JSON Import/Export
- Web Configuration