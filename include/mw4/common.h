#ifndef MW4_COMMON_H
#define MW4_COMMON_H

/* Common types and helpers for the MW4 decompilation. */

/*
 * LogCtx — log context object (g_log_ctx at 0x0082F388).
 * Source: FUN_006CB240, FUN_006CBF20, FUN_006CB9F0.
 *
 * Layout (__thiscall, this in ecx):
 *   0x00: vtable pointer (not used by log methods directly)
 *   0x04: width (int)
 *   0x08: height (int)
 *   0x0C: pitch (int) — surface pitch in bytes
 *   0x10-0x14: unknown
 *   0x18: pixels (int) — surface pixel data pointer
 *   0x1C: flags (byte)
 *   0x20-0x24: unknown
 *   0x28: char_width (int) — default glyph width in pixels
 *   0x2C: line_height (int) — line height in pixels
 *   0x30: unknown
 *   0x34: fill_color (int) — color for glyph rendering
 *   0x38: flags2 (byte)
 *   0x3A: has_width_table (byte) — nonzero if per-char width table exists
 *   0x3B+: width_table[96] (signed char) — per-char widths for 0x20..0x7F
 */
typedef struct LogCtx {
    void   *vtable;         /* 0x00 */
    int     width;          /* 0x04 */
    int     height;         /* 0x08 */
    int     pitch;          /* 0x0C */
    int     unk_10;         /* 0x10 */
    int     unk_14;         /* 0x14 */
    int     pixels;         /* 0x18 */
    unsigned char flags;    /* 0x1C */
    unsigned char pad_1D[0x0B]; /* 0x1D-0x27 */
    int     char_width;     /* 0x28 */
    int     line_height;    /* 0x2C */
    int     unk_30;         /* 0x30 */
    int     fill_color;     /* 0x34 */
    unsigned char flags2;   /* 0x38 */
    unsigned char pad_39;   /* 0x39 */
    unsigned char has_width_table; /* 0x3A */
    signed char width_table[96];   /* 0x3B+ */
} LogCtx;

#endif