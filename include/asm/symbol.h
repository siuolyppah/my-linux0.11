#ifndef _SYMBOL_H
#define _SYMBOL_H

// 在kernel/asm.s或system_call.s中定义

/**
 * int0
 * @note kernel/asm.s,19
 */
void divide_error(void);

/**
 * int1
 * @note kernel/asm.s,53
 */
void debug(void);

/**
 * int2
 * @note kernel/asm.s,57
 */
void nmi(void);

/**
 * int3
 * @note kernel/asm.s,61
 */
void int3(void);

/**
 * int4
 * @note kernel/asm.s,65
 */
void overflow(void);

/**
 * int5
 * @note kernel/asm.s,69
 */
void bounds(void);

/**
 * int6
 * @note kernel/asm.s,73
 */
void invalid_op(void);

/**
 * int7
 * @note kernel/system_call.s,148
 */
void device_not_available(void);

/**
 * int8
 * @note kernel/asm.s,97
 */
void double_fault(void);

/**
 * int9
 * @note kernel/asm.s,77
 */
void coprocessor_segment_overrun(void);

/**
 * int10
 * @note kernel/asm.s,131
 */
void invalid_TSS(void);

/**
 * int11
 * @note kernel/asm.s,135
 */
void segment_not_present(void);

/**
 * int12
 * @note kernel/asm.s,139
 */
void stack_segment(void);

/**
 * int13
 * @note kernel/asm.s,143)
 */
void general_protection(void);

/**
 * int14
 * @note mm/page.s,14
 */
void page_fault(void);

/**
 * int15
 * @note kernel/asm.s,81
 */
void reserved(void);

/**
 * int16
 * @note kernel/system_call.s,131
 */
void coprocessor_error(void);

/**
 * int39
 * @note kernel/system_call.s,280
 */
void parallel_interrupt(void);

/**
 * int45协处理器中断处理
 * @note kernel/asm.s,85
 */
void irq13(void);

#endif
