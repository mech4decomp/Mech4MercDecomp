#ifndef MW4_ABL_GLOBALS_H
#define MW4_ABL_GLOBALS_H

/* ABL (scripting language) runtime global variables.
 * Source: Ghidra analysis of FUN_00569ff0 and related ABL functions.
 *
 * These are absolute-address globals in the .data section.
 */

/* 0x00805918 - Current bytecode position pointer */
#define DAT_00805918  (*(void**)0x00805918)

/* 0x00805908 - Current opcode byte (sign-extended) */
#define DAT_00805908  (*(int*)0x00805908)

/* 0x0080592c - Stack pointer for ABL execution stack */
#define DAT_0080592c  (*(void**)0x0080592c)

/* 0x00805928 - Stack base (low address of ABL execution stack) */
#define DAT_00805928  (*(int*)0x00805928)

/* 0x0080d9bc - Return value register */
#define DAT_0080d9bc  (*(int*)0x0080d9bc)

#endif /* MW4_ABL_GLOBALS_H */
