/*
 * FUN_10001e95 (78 B) — allocate param_1 bytes: CRT allocator for small
 * sizes, else private-heap HeapAlloc.
 *
 * __cdecl, 1 arg.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10001e95 (78 B) -- __cdecl alloc: try slot-table lookup under lock(9);
 * fall back to HeapAlloc with 16-aligned size (p==0 -> 1 first). /O1.
 */

extern int g_10005340;                                /* 0x10005340 small-alloc threshold */
extern void *g_100057a8;                              /* 0x100057a8 heap handle */

extern void *(__stdcall *g_HeapAlloc)(void *, unsigned int, unsigned int); /* IAT 0x10004074 */

extern void __cdecl FUN_10001d0c(int);
extern void *__cdecl FUN_10002b19(int);
extern void __cdecl FUN_10001d6d(int);

__declspec(naked) void *__cdecl FUN_10001e95(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        cmp     esi, dword ptr [g_10005340]
        push    edi
        ja      L_ec4
        push    9
        call    FUN_10001d0c
        push    esi
        call    FUN_10002b19
        push    9
        mov     edi, eax
        call    FUN_10001d6d
        add     esp, 0xc
        test    edi, edi
        jz      L_ec4
        mov     eax, edi
        jmp     L_ee0
L_ec4:
        test    esi, esi
        jnz     L_ecb
        push    1
        pop     esi
L_ecb:
        add     esi, 0xf
        and     esi, 0xfffffff0
        push    esi
        push    0
        push    dword ptr [g_100057a8]
        call    dword ptr [g_HeapAlloc]
L_ee0:
        pop     edi
        pop     esi
        ret
    }
}
