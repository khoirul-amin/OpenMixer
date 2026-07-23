# Debug Module

Modul **Debug** menyediakan sistem logging terpusat untuk seluruh firmware OpenMixer.

Semua pesan log dari setiap modul (USB, Audio, DMA, ADC, DAC, dan lainnya) harus menggunakan API pada modul ini.

---

## Tujuan

- Menyediakan logging yang konsisten.
- Mempermudah proses debugging firmware.
- Memungkinkan log dinonaktifkan saat firmware release.
- Menjadi satu-satunya pintu keluar untuk pesan debug.

---

## Struktur

```
Debug/
├── debug.c
├── debug.h
└── README.md
```

---

## Public API

### Initialization

```c
bool debug_init(void);
```

Menginisialisasi modul Debug.

---

### Logging

```c
void debug_log(debug_level_t level, const char *message);
```

Mencetak pesan log sesuai level.

---

## Log Level

```c
typedef enum
{
    DEBUG_LEVEL_INFO = 0,
    DEBUG_LEVEL_WARN,
    DEBUG_LEVEL_ERROR

} debug_level_t;
```

| Level | Deskripsi |
|--------|-----------|
| INFO | Informasi umum |
| WARN | Peringatan |
| ERROR | Kesalahan |

---

## Shortcut Macro

```c
#define LOG_INFO(msg)
#define LOG_WARN(msg)
#define LOG_ERROR(msg)
```

Penggunaan:

```c
LOG_INFO("USB Ready");

LOG_WARN("Audio Buffer Almost Full");

LOG_ERROR("USB Enumeration Failed");
```

---

## Contoh Output

```text
[INFO ] USB Ready
[WARN ] Audio Buffer Almost Full
[ERROR] USB Enumeration Failed
```

---

## Coding Rules

- Jangan menggunakan `printf()` secara langsung di modul lain.
- Semua output debug harus melalui `debug_log()`.
- Gunakan macro `LOG_INFO`, `LOG_WARN`, dan `LOG_ERROR`.
- Saat firmware release, logging dapat dimatikan dengan:

```c
#define DEBUG_ENABLE 0
```

---

## Future Development

Output log dapat dialihkan ke media lain tanpa mengubah kode modul lain.

Target yang direncanakan:

- UART
- USB CDC
- SWO (Serial Wire Output)
- SEGGER RTT
- File Log (Host PC)

---

## Dependencies

- `<stdio.h>`

---

## Current Status

- [x] Module Structure
- [x] Public API
- [x] Log Level
- [x] Logging Function
- [x] Shortcut Macro
- [ ] Timestamp
- [ ] Module Name
- [ ] Colored Terminal Output
- [ ] UART Backend
- [ ] USB CDC Backend