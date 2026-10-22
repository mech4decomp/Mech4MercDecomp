/*
 * FUN_10001c20 (93 B) — create the private heap (HeapCreate), then run the
 * heap-selection bootstrap FUN_10001ad8; if it selects heap type 3, allocate
 * a 0x3f8-byte block, if type 2 call FUN_100037f0. On failure of either,
 * destroy the heap and return 0; else return 1.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10001c20 (93 B) -- heap create + dispatch by FUN_10001ad8 result.
 * PER-TU OPT: /O1 (module default /O2). g_10008fe8 = HeapCreate(p==0,0x1000,0);
 * g_10008fec = init(); if ==3 -> table init via 10002f9f(0x3f8); ==2 ->
 * 100037f0; else return 1. Failure paths HeapDestroy + return 0; success 1.
 */

extern void __cdecl FUN_10001ad8(void);               /* heap-selection bootstrap */
extern void *__cdecl FUN_10002f9f(void);              /* _malloc */
extern void *__cdecl FUN_100037f0(void);              /* heap-type-2 init */

extern void *g_10008fe8;                              /* 0x10008fe8 heap handle */
extern int g_10008fec;                                /* 0x10008fec heap-select result */

extern void *(__stdcall *g_HeapCreate)(void *, unsigned int, unsigned int); /* IAT 0x1000506c */
extern int (__stdcall *g_HeapDestroy)(void *);        /* IAT 0x10005068 */

__declspec(naked) void __cdecl FUN_10001c20(void)
{
    __asm {
        xor     eax, eax
        push    0
        cmp     dword ptr [esp + 8], eax
        push    0x1000
        setz    al
        push    eax
        call    dword ptr [g_HeapCreate]
        test    eax, eax
        mov     dword ptr [g_10008fe8], eax
        jz      L_1c76
        call    FUN_10001ad8
        cmp     eax, 3
        mov     dword ptr [g_10008fec], eax
        jnz     L_1c5c
        push    0x3f8
        call    FUN_10002f9f
        pop     ecx
        jmp     L_1c66
L_1c5c:
        cmp     eax, 2
        jnz     L_1c79
        call    FUN_100037f0
L_1c66:
        test    eax, eax
        jnz     L_1c79
        push    dword ptr [g_10008fe8]
        call    dword ptr [g_HeapDestroy]
L_1c76:
        xor     eax, eax
        ret
L_1c79:
        push    1
        pop     eax
        ret
    }
}
