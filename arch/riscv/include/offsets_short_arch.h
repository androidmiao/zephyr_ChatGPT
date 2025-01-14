/*
 * Copyright (c) 2016 Jean-Paul Etienne <fractalclone@gmail.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file
 * @ChatGPT Explain
 *
 * This code is defining macro constants that correspond to the offsets of various data fields within the memory layout of a RISC-V microcontroller running the Zephyr operating system. 
 * The code is part of the architecture-specific headers of the Zephyr OS and provides access to the memory locations of the stack pointer (sp), return address (ra), thread pointer (tp), 
 * and various saved registers (s0-s11) of a running thread. 
 * The macro constants are calculated based on the values of other constants defined in the offsets.h file. 
 * The code also includes macros for accessing the locations of data related to floating-point operations, privilege mode switching, and user exception handling. 
 * The code uses the #ifdef preprocessor directive to conditionally compile the macro definitions based on the presence or absence of certain configuration options. 
 */

#ifndef ZEPHYR_ARCH_RISCV_INCLUDE_OFFSETS_SHORT_ARCH_H_
#define ZEPHYR_ARCH_RISCV_INCLUDE_OFFSETS_SHORT_ARCH_H_

#include <offsets.h>

#define _thread_offset_to_sp \
	(___thread_t_callee_saved_OFFSET + ___callee_saved_t_sp_OFFSET)

#define _thread_offset_to_ra \
	(___thread_t_callee_saved_OFFSET + ___callee_saved_t_ra_OFFSET)

#define _thread_offset_to_tp \
	(___thread_t_callee_saved_OFFSET + ___callee_saved_t_tp_OFFSET)

#define _thread_offset_to_s0 \
	(___thread_t_callee_saved_OFFSET + ___callee_saved_t_s0_OFFSET)

#define _thread_offset_to_s1 \
	(___thread_t_callee_saved_OFFSET + ___callee_saved_t_s1_OFFSET)

#define _thread_offset_to_s2 \
	(___thread_t_callee_saved_OFFSET + ___callee_saved_t_s2_OFFSET)

#define _thread_offset_to_s3 \
	(___thread_t_callee_saved_OFFSET + ___callee_saved_t_s3_OFFSET)

#define _thread_offset_to_s4 \
	(___thread_t_callee_saved_OFFSET + ___callee_saved_t_s4_OFFSET)

#define _thread_offset_to_s5 \
	(___thread_t_callee_saved_OFFSET + ___callee_saved_t_s5_OFFSET)

#define _thread_offset_to_s6 \
	(___thread_t_callee_saved_OFFSET + ___callee_saved_t_s6_OFFSET)

#define _thread_offset_to_s7 \
	(___thread_t_callee_saved_OFFSET + ___callee_saved_t_s7_OFFSET)

#define _thread_offset_to_s8 \
	(___thread_t_callee_saved_OFFSET + ___callee_saved_t_s8_OFFSET)

#define _thread_offset_to_s9 \
	(___thread_t_callee_saved_OFFSET + ___callee_saved_t_s9_OFFSET)

#define _thread_offset_to_s10 \
	(___thread_t_callee_saved_OFFSET + ___callee_saved_t_s10_OFFSET)

#define _thread_offset_to_s11 \
	(___thread_t_callee_saved_OFFSET + ___callee_saved_t_s11_OFFSET)

#define _thread_offset_to_swap_return_value \
	(___thread_t_arch_OFFSET + ___thread_arch_t_swap_return_value_OFFSET)

#if defined(CONFIG_FPU_SHARING)

#define _thread_offset_to_exception_depth \
	(___thread_t_arch_OFFSET + ___thread_arch_t_exception_depth_OFFSET)

#endif

#ifdef CONFIG_USERSPACE

#define _thread_offset_to_priv_stack_start \
	(___thread_t_arch_OFFSET + ___thread_arch_t_priv_stack_start_OFFSET)

#define _thread_offset_to_user_sp \
	(___thread_t_arch_OFFSET + ___thread_arch_t_user_sp_OFFSET)

#define _curr_cpu_arch_user_exc_sp \
	(___cpu_t_arch_OFFSET + ___cpu_arch_t_user_exc_sp_OFFSET)

#define _curr_cpu_arch_user_exc_tmp0 \
	(___cpu_t_arch_OFFSET + ___cpu_arch_t_user_exc_tmp0_OFFSET)

#define _curr_cpu_arch_user_exc_tmp1 \
	(___cpu_t_arch_OFFSET + ___cpu_arch_t_user_exc_tmp1_OFFSET)

#endif

#endif /* ZEPHYR_ARCH_RISCV_INCLUDE_OFFSETS_SHORT_ARCH_H_ */
