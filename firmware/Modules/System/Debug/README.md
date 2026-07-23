# Debug Module

Debug Module menyediakan logging terpusat untuk seluruh firmware OpenMixer.

## Tujuan

- Mempermudah debugging selama pengembangan.
- Menyediakan format log yang konsisten.
- Memungkinkan seluruh log dimatikan saat firmware release.

## API

```c
debug_init();

debug_info();

debug_warning();

debug_error();
```

## Contoh

```c
debug_info("USB Ready");

debug_warning("Audio Buffer Almost Full");

debug_error("USB Enumeration Failed");
```

## Output

```
[INFO ] USB Ready

[WARN ] Audio Buffer Almost Full

[ERROR] USB Enumeration Failed
```

## Future

Pada tahap awal log menggunakan `printf()`.

Ke depannya output dapat dialihkan ke:

- UART
- USB CDC
- SWO
- RTT
- File Log (Host)