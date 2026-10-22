/*
 * FUN_10001fbc (289 B) — custom heap allocator (SEH-protected). Computes
 * size = param_1 * param_2, rounds up to 16 bytes (min 1). Depending on
 * the heap-select result (DAT_10008fec): type 3 uses FUN_1000333b (with
 * a 0x10008db0 cap), type 2 uses FUN_10003ae8 (with a 0x10008364 cap);
 * otherwise falls back to HeapAlloc on the private heap. On failure, if
 * DAT_10008c18 is set, retries via FUN_10003f9e.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10001f46(void);               /* section enter */
extern void __cdecl FUN_10001fa7(void);               /* section leave */
extern void *__cdecl FUN_1000333b(void);              /* heap-type-3 alloc */
extern void __cdecl FUN_10002055(void);               /* section leave (type 3) */
extern void *__cdecl FUN_10003ae8(void);              /* heap-type-2 alloc */
extern void __cdecl FUN_100020de(void);               /* section leave (type 2) */
extern void *__cdecl FUN_10003fc0(void);              /* _memset */
extern int __cdecl FUN_10003f9e(void);                /* retry allocator */
extern void __cdecl FUN_10004110(void);               /* SEH handler */

extern char g_100053f0;                               /* 0x100053f0 SEH scope data */

extern int g_10008fec;                                /* 0x10008fec heap-select result */
extern int g_10008db0;                                /* 0x10008db0 type-3 cap */
extern int g_10008364;                                /* 0x10008364 type-2 cap */
extern void *g_10008fe8;                              /* 0x10008fe8 heap handle */
extern int g_10008c18;                                /* 0x10008c18 retry flag */

extern void *(__stdcall *g_HeapAlloc)(void *, unsigned int, unsigned int); /* IAT 0x10005088 */

__declspec(naked) void __cdecl FUN_10001fbc(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    -1
        push    offset g_100053f0
        push    offset FUN_10004110
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x18
        push    ebx
        push    esi
        push    edi
        mov     esi, dword ptr [ebp + 8]
        imul    esi, dword ptr [ebp + 0xc]
        mov     dword ptr [ebp + 0xc], esi
        mov     dword ptr [ebp - 0x1c], esi
        cmp     esi, -0x20
        ja      L_2005
        xor     ebx, ebx
        cmp     esi, ebx
        jnz     L_1ffa
        push    1
        pop     esi
L_1ffa:
        add     esi, 0xf
        and     esi, 0xfffffff0
        mov     dword ptr [ebp + 0xc], esi
        jmp     L_2007
L_2005:
        xor     ebx, ebx
L_2007:
        mov     dword ptr [ebp - 0x20], ebx
        cmp     esi, -0x20
        ja      L_20bb
        mov     eax, dword ptr [g_10008fec]
        cmp     eax, 3
        jnz     L_205e
        mov     edi, dword ptr [ebp - 0x1c]
        cmp     edi, dword ptr [g_10008db0]
        ja      L_20a4
        push    9
        call    FUN_10001f46
        pop     ecx
        mov     dword ptr [ebp - 4], ebx
        push    edi
        call    FUN_1000333b
        pop     ecx
        mov     dword ptr [ebp - 0x20], eax
        or      dword ptr [ebp - 4], 0xffffffff
        call    FUN_10002055
        cmp     dword ptr [ebp - 0x20], ebx
        jz      L_20a9
        push    dword ptr [ebp - 0x1c]
        jmp     L_2098
        /* dead-code block at 0x10002050 (skipped by the jmp above) */
        xor     ebx, ebx
        mov     esi, [ebp + 0xc]
        push    9
        call    FUN_10001fa7
        pop     ecx
        ret
L_205e:
        cmp     eax, 2
        jnz     L_20a4
        cmp     esi, dword ptr [g_10008364]
        ja      L_20a4
        push    9
        call    FUN_10001f46
        pop     ecx
        mov     dword ptr [ebp - 4], 1
        mov     eax, esi
        shr     eax, 4
        push    eax
        call    FUN_10003ae8
        pop     ecx
        mov     dword ptr [ebp - 0x20], eax
        or      dword ptr [ebp - 4], 0xffffffff
        call    FUN_100020de
        cmp     dword ptr [ebp - 0x20], ebx
        jz      L_20a9
        push    esi
L_2098:
        push    ebx
        push    dword ptr [ebp - 0x20]
        call    FUN_10003fc0
        add     esp, 0xc
L_20a4:
        cmp     dword ptr [ebp - 0x20], ebx
        jnz     L_20e7
L_20a9:
        push    esi
        push    8
        push    dword ptr [g_10008fe8]
        call    dword ptr [g_HeapAlloc]
        mov     dword ptr [ebp - 0x20], eax
L_20bb:
        cmp     dword ptr [ebp - 0x20], ebx
        jnz     L_20e7
        cmp     dword ptr [g_10008c18], ebx
        jz      L_20e7
        push    esi
        call    FUN_10003f9e
        pop     ecx
        test    eax, eax
        jnz     L_2007
        jmp     L_20ea
        /* dead-code block at 0x100020D9 (skipped by the jmp above) */
        xor     ebx, ebx
        mov     esi, [ebp + 0xc]
        push    9
        call    FUN_10001fa7
        pop     ecx
        ret
L_20e7:
        mov     eax, dword ptr [ebp - 0x20]
L_20ea:
        mov     ecx, dword ptr [ebp - 0x10]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
