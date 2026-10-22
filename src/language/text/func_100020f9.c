/*
 * FUN_100020f9 (215 B) — SEH-protected string-table allocator. Given a
 * size in param_1, selects a heap type from DAT_10008fec: type 3 uses
 * FUN_10002fe7 (alloc) + FUN_10003012 (copy); type 2 uses FUN_10003a4c
 * (alloc) + FUN_10003aa3 (copy); otherwise falls back to HeapFree on the
 * private heap (DAT_10008fe8). Returns the allocated pointer.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10001f46(void);               /* section enter */
extern void __cdecl FUN_10001fa7(void);               /* section leave */
extern void __cdecl FUN_10002fe7(void);               /* heap-type-3 alloc */
extern void __cdecl FUN_10003012(void);               /* heap-type-3 copy */
extern void __cdecl FUN_10002163(void);               /* section leave (type 3) */
extern void __cdecl FUN_10003a4c(void);               /* heap-type-2 alloc */
extern void __cdecl FUN_10003aa3(void);               /* heap-type-2 copy */
extern void __cdecl FUN_100021bb(void);               /* section leave (type 2) */
extern void __cdecl FUN_10004110(void);               /* SEH handler */

extern char g_10005408;                               /* 0x10005408 SEH scope data */

extern int g_10008fec;                                /* 0x10008fec heap-select result */
extern void *g_10008fe8;                              /* 0x10008fe8 heap handle */

extern int (__stdcall *g_HeapFree)(void *, unsigned int, void *); /* IAT 0x10005074 */

__declspec(naked) void __cdecl FUN_100020f9(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    -1
        push    offset g_10005408
        push    offset FUN_10004110
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x18
        push    ebx
        push    esi
        push    edi
        mov     esi, dword ptr [ebp + 8]
        test    esi, esi
        jz      L_21d3
        mov     eax, dword ptr [g_10008fec]
        cmp     eax, 3
        jnz     L_216c
        push    9
        call    FUN_10001f46
        pop     ecx
        and     dword ptr [ebp - 4], 0
        push    esi
        call    FUN_10002fe7
        pop     ecx
        mov     dword ptr [ebp - 0x1c], eax
        test    eax, eax
        jz      L_2154
        push    esi
        push    eax
        call    FUN_10003012
        pop     ecx
        pop     ecx
L_2154:
        or      dword ptr [ebp - 4], 0xffffffff
        call    FUN_10002163
        cmp     dword ptr [ebp - 0x1c], 0
        jmp     L_21b4
        /* dead-code block at 0x10002163 (inlined FUN_10002163 body, skipped by jmp) */
        push    9
        call    FUN_10001fa7
        pop     ecx
        ret
L_216c:
        cmp     eax, 2
        jnz     L_21c4
        push    9
        call    FUN_10001f46
        pop     ecx
        mov     dword ptr [ebp - 4], 1
        lea     eax, [ebp - 0x20]
        push    eax
        lea     eax, [ebp - 0x28]
        push    eax
        push    esi
        call    FUN_10003a4c
        add     esp, 0xc
        mov     dword ptr [ebp - 0x24], eax
        test    eax, eax
        jz      L_21a7
        push    eax
        push    dword ptr [ebp - 0x20]
        push    dword ptr [ebp - 0x28]
        call    FUN_10003aa3
        add     esp, 0xc
L_21a7:
        or      dword ptr [ebp - 4], 0xffffffff
        call    FUN_100021bb
        cmp     dword ptr [ebp - 0x24], 0
L_21b4:
        jnz     L_21d3
        push    dword ptr [ebp + 8]
        jmp     L_21c5
        /* dead-code block at 0x100021bb (inlined FUN_100021bb body, skipped by jmp) */
        push    9
        call    FUN_10001fa7
        pop     ecx
        ret
L_21c4:
        push    esi
L_21c5:
        push    0
        push    dword ptr [g_10008fe8]
        call    dword ptr [g_HeapFree]
L_21d3:
        mov     ecx, dword ptr [ebp - 0x10]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
