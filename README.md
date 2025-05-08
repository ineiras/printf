# 🖨️ printf – 42 Barcelona

[![Language: C](https://img.shields.io/badge/language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Project: 42](https://img.shields.io/badge/42%20Network-ft_printf-1f425f.svg)](https://42.fr/)
[![Status: Completed](https://img.shields.io/badge/status-completed-brightgreen)](https://github.com/)
[![License: Custom](https://img.shields.io/badge/license-42%20School%20Policy-lightgrey)](https://42.fr/)

---

## 🌐 English Description

**printf** is a 42 project that replicates the behavior of the standard C `printf` function (`<stdio.h>`), aiming to deepen the understanding of key C language concepts such as:
- Handling **variable arguments** via `stdarg.h`
- **Formatting output** dynamically
- Working with **pointers**, buffers, and custom parsing

The implemented function writes formatted output to the standard output and supports the following format specifiers:

| Specifier | Description                                |
|-----------|--------------------------------------------|
| `%c`      | Prints a single character                  |
| `%s`      | Prints a string                            |
| `%p`      | Prints a pointer address in hexadecimal    |
| `%d` / `%i` | Prints a signed decimal integer         |
| `%u`      | Prints an unsigned decimal integer         |
| `%x`      | Prints a hexadecimal (lowercase) number    |
| `%X`      | Prints a hexadecimal (uppercase) number    |
| `%%`      | Prints a literal percent sign              |

> ✅ **Status:** This repository is complete and will not receive further updates. 

---

## 🇪🇸 Descripción en Español

**printf** es un proyecto de 42 que replica el comportamiento de la función estándar `printf` de C (`<stdio.h>`), con el objetivo de profundizar en conceptos clave del lenguaje como:
- Manejo de **argumentos variables** con `stdarg.h`
- **Formateo dinámico** de salidas
- Uso de **punteros**, búferes y análisis de cadenas

La función implementada permite imprimir en la salida estándar utilizando los siguientes formatos:

| Especificador | Descripción                             |
|---------------|------------------------------------------|
| `%c`          | Imprime un solo carácter                 |
| `%s`          | Imprime una cadena de texto              |
| `%p`          | Imprime una dirección de puntero en hex  |
| `%d` / `%i`   | Imprime un número entero con signo       |
| `%u`          | Imprime un número entero sin signo       |
| `%x`          | Imprime un número hexadecimal minúsculo  |
| `%X`          | Imprime un número hexadecimal mayúsculo  |
| `%%`          | Imprime el símbolo de porcentaje         |

> ✅ **Estado:** Este repositorio está finalizado y no se actualizará.

---
## 🧪 How to Use

```bash
git clone https://github.com/ineiras/printf.git
cd printf
make
