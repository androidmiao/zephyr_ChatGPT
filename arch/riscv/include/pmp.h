/*
 * Copyright (c) 2022 BayLibre, SAS
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file
 * @ChatGPT Explain
 *
 * This code defines a header file for a set of functions related to "PMP" in RISC-V architecture.
 * The code starts with "#ifndef PMP_H_" and "#define PMP_H_" which is a preprocessor directive used to prevent multiple inclusions of the same header file in a single translation unit.
 * Then, five functions are declared:
 *
 * z_riscv_pmp_init initializes the PMP (Physical Memory Protection) system.
 * z_riscv_pmp_stackguard_prepare prepares a PMP guard for a given thread's stack.
 * z_riscv_pmp_stackguard_enable enables the PMP guard for a given thread's stack.
 * z_riscv_pmp_usermode_init initializes PMP protection for a user mode thread.
 * z_riscv_pmp_usermode_prepare prepares PMP protection for a user mode thread.
 * z_riscv_pmp_usermode_enable enables PMP protection for a user mode thread.
 * 
 * The code ends with "#endif // PMP_H_ " which is a preprocessor directive that terminates the "#ifndef PMP_H_" directive and 
 * prevents the subsequent code from being processed when the header is included.
 */

#ifndef PMP_H_
#define PMP_H_

void z_riscv_pmp_init(void);
void z_riscv_pmp_stackguard_prepare(struct k_thread *thread);
void z_riscv_pmp_stackguard_enable(struct k_thread *thread);
void z_riscv_pmp_usermode_init(struct k_thread *thread);
void z_riscv_pmp_usermode_prepare(struct k_thread *thread);
void z_riscv_pmp_usermode_enable(struct k_thread *thread);

#endif /* PMP_H_ */
