# Core

Core berisi entry point dan konfigurasi dasar firmware OpenMixer.

Folder ini hanya bertanggung jawab terhadap proses booting mikrokontroler STM32H750, inisialisasi sistem, serta pengaturan interrupt.

**Folder ini tidak boleh berisi logika audio, USB, maupun DSP.**

---

## Tujuan

- Boot STM32H750
- Konfigurasi System Clock
- Inisialisasi HAL
- Inisialisasi Peripheral
- Menyediakan main loop aplikasi

---

## Struktur

```
Core/
├── Inc/
│   ├── main.h
│   ├── stm32h7xx_it.h
│   └── stm32h7xx_hal_conf.h
│
├── Src/
│   ├── main.c
│   ├── stm32h7xx_it.c
│   ├── stm32h7xx_hal_msp.c
│   └── system_stm32h7xx.c
│
└── README.md
```

---

## File

### main.c

Entry point firmware.

Bertugas untuk:

- HAL_Init()
- SystemClock_Config()
- Peripheral Initialization
- Menjalankan Main Loop

Contoh:

```c
int main(void)
{
    HAL_Init();

    SystemClock_Config();

    MX_GPIO_Init();

    while (1)
    {

    }
}
```

---

### system_stm32h7xx.c

Konfigurasi clock Cortex-M7.

Tanggung jawab:

- PLL
- Cache
- FPU
- System Clock
- Peripheral Clock

---

### stm32h7xx_it.c

Berisi seluruh Interrupt Handler.

Contoh:

- DMA
- USB
- I2S
- SysTick

Interrupt harus sesingkat mungkin.

---

### stm32h7xx_hal_msp.c

Hardware Support Package dari HAL.

Biasanya berisi konfigurasi:

- GPIO Alternate Function
- DMA Link
- Clock Peripheral

---

## Coding Rules

Core **tidak boleh** mengandung:

- USB Audio Logic
- TinyUSB Implementation
- Audio Processing
- Codec Driver
- Ring Buffer
- DSP Algorithm

Semua kode tersebut dipindahkan ke folder lain.

Core hanya bertugas melakukan booting sistem.

---

## Dependency

```
Core
 │
 ├── HAL
 ├── CMSIS
 └── Drivers
```

Core tidak boleh bergantung pada modul Audio maupun USB.

---

## Related Issues

- #1 Bring-up STM32H750 Development Board
- #2 Configure Development Environment

---

## Future

Tahap awal Core hanya akan digunakan untuk:

- LED Blink
- UART Debug
- USB CDC Bring-up

Setelah sistem stabil, Core tidak akan mengalami banyak perubahan selama pengembangan OpenMixer.