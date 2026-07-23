# Common Module

Common Module menyediakan tipe data, status, versi firmware, dan macro yang digunakan oleh seluruh modul OpenMixer.

---

## Components

- om_common.h
- om_types.h
- om_status.h
- om_version.h
- om_defines.h

---

## Purpose

- Menyediakan tipe data bersama.
- Menyediakan status return bersama.
- Menyediakan versi firmware.
- Menyediakan macro umum.

---

## Rules

Semua modul wajib meng-include `om_common.h` daripada meng-include file satu per satu.