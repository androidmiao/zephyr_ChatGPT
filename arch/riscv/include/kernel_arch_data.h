/*
 * Copyright (c) 2016 Jean-Paul Etienne <fractalclone@gmail.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file
 * @brief Private kernel definitions
 *
 * This file contains private kernel structures definitions and various
 * other definitions for the RISCV processor architecture.
 */

/**
 * @file
 * @ChatGPT Explain
 *
 * This is a header file in C language for the Zephyr operating system, specifically for the RISC-V architecture. 
 * The purpose of this header file is to define and include required components and dependencies for the Zephyr kernel on RISC-V architecture.
 * 
 * The first line, #ifndef ZEPHYR_ARCH_RISCV_INCLUDE_KERNEL_ARCH_DATA_H_, is a preprocessor directive that checks if the symbol ZEPHYR_ARCH_RISCV_INCLUDE_KERNEL_ARCH_DATA_H_ has not been defined, 
 * and if it has not, the header file is processed. The #define ZEPHYR_ARCH_RISCV_INCLUDE_KERNEL_ARCH_DATA_H_ line defines the symbol, 
 * ensuring that the header file is not processed again if it is included multiple times.
 * 
 * The header file includes a number of other header files from the Zephyr operating system, such as zephyr/toolchain.h, zephyr/linker/sections.h, zephyr/arch/cpu.h.
 * 
 * The code within the block #ifndef _ASMLANGUAGE is only included if the symbol _ASMLANGUAGE has not been defined. 
 * This code includes several more header files and defines some C code within an extern "C" block, which tells the compiler to treat the code as C code, not C++ code.
 * 
 * Finally, the header file ends with #endif //ZEPHYR_ARCH_RISCV_INCLUDE_KERNEL_ARCH_DATA_H_ , which closes the preprocessor directive from the first line.
 */ 
 
#ifndef ZEPHYR_ARCH_RISCV_INCLUDE_KERNEL_ARCH_DATA_H_
#define ZEPHYR_ARCH_RISCV_INCLUDE_KERNEL_ARCH_DATA_H_

#include <zephyr/toolchain.h>
#include <zephyr/linker/sections.h>
#include <zephyr/arch/cpu.h>

#ifndef _ASMLANGUAGE
#include <zephyr/kernel.h>
#include <zephyr/types.h>
#include <zephyr/sys/util.h>
#include <zephyr/sys/dlist.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
}
#endif

#endif /* _ASMLANGUAGE */

#endif /* ZEPHYR_ARCH_RISCV_INCLUDE_KERNEL_ARCH_DATA_H_ */
