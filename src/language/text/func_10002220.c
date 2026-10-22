/*
 * FUN_10002220 (231 B) — SEH-protected heap allocator. Given a size in
 * param_1, selects a heap type from DAT_10008fec: type 3 uses FUN_1000333b
 * (with a 0x10008db0 cap); type 2 rounds up to 16 bytes and uses
 * FUN_10003ae8 (with a 0x10008364 cap); otherwise falls back to HeapAlloc
 * on the private heap (DAT_10008fe8). Returns the allocated pointer.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10001f46(void);               /* section enter */
extern void __cdecl FUN_10001fa7(void);               /* section leave */
extern void *__cdecl FUN_1000333b(void);              /* heap-type-3 alloc */
extern void __cdecl FUN_10002287(void);               /* section leave (type 3) */
extern void *__cdecl FUN_10003ae8(void);              /* heap-type-2 alloc */
extern void __cdecl FUN_100022e6(void);               /* section leave (type 2) */
extern void __cdecl FUN_10004110(void);               /* SEH handler */

extern char g_10005420;                               /* 0x10005420 SEH scope data */

extern int g_10008fec;                                /* 0x10008fec heap-select result */
extern int g_10008db0;                                /* 0x10008db0 type-3 cap */
extern int g_10008364;                                /* 0x10008364 type-2 cap */
extern void *g_10008fe8;                              /* 0x10008fe8 heap handle */

extern void *(__stdcall *g_HeapAlloc)(void *, unsigned int, unsigned int); /* IAT 0x10005088 */

__declspec(naked) void __cdecl FUN_10002220(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    -1
        push    offset g_10005420
        push    offset FUN_10004110
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0xc
        push    ebx
        push    esi
        push    edi
        mov     eax, dword ptr [g_10008fec]
        cmp     eax, 3
        jnz     L_2290
        mov     esi, dword ptr [ebp + 8]
        cmp     esi, dword ptr [g_10008db0]
        ja      L_22ef
        push    9
        call    FUN_10001f46
        pop     ecx
        and     dword ptr [ebp - 4], 0
        push    esi
        call    FUN_1000333b
        pop     ecx
        mov     dword ptr [ebp - 0x1c], eax
        or      dword ptr [ebp - 4], 0xffffffff
        call    FUN_10002287
        mov     eax, dword ptr [ebp - 0x1c]
        test    eax, eax
        jz      L_22ef
        jmp     L_230d
        /* dead-code block at 0x10002287 (inlined FUN_10002287 body, skipped by jmp) */
        push    9
        call    FUN_10001fa7
        pop     ecx
        ret
L_2290:
        cmp     eax, 2
        jnz     L_22ef
        mov     eax, dword ptr [ebp + 8]
        test    eax, eax
        jz      L_22a4
        lea     esi, [eax + 0xf]
        and     esi, 0xfffffff0
        jmp     L_22a7
L_22a4:
        push    0x10
        pop     esi
L_22a7:
        mov     dword ptr [ebp + 8], esi
        cmp     esi, dword ptr [g_10008364]
        ja      L_22e0
        push    9
        call    FUN_10001f46
        pop     ecx
        mov     dword ptr [ebp - 4], 1
        mov     eax, esi
        shr     eax, 4
        push    eax
        call    FUN_10003ae8
        pop     ecx
        mov     dword ptr [ebp - 0x1c], eax
        or      dword ptr [ebp - 4], 0xffffffff
        call    FUN_100022e6
        mov     eax, dword ptr [ebp - 0x1c]
        test    eax, eax
        jnz     L_230d
L_22e0:
        push    esi
        jmp     L_22ff
        /* dead-code block at 0x100022e3 (inlined section-leave body, skipped by jmp) */
        mov     esi, dword ptr [ebp + 8]
        push    9
        call    FUN_10001fa7
        pop     ecx
        ret
L_22ef:
        mov     eax, dword ptr [ebp + 8]
        test    eax, eax
        jnz     L_22f9
        push    1
        pop     eax
L_22f9:
        add     eax, 0xf
        and     al, 0xf0
        push    eax
L_22ff:
        push    0
        push    dword ptr [g_10008fe8]
        call    dword ptr [g_HeapAlloc]
L_230d:
        mov     ecx, dword ptr [ebp - 0x10]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
