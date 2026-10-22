/*
 * FUN_0074b3f0 (434 B) — Initializes a set of DirectInput force-feedback
 * effect definitions via FUN_0074b380, then (if DAT_008aaed0 is set)
 * copies a set of data tables.
 *
 * __cdecl, RET (no params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0074b380(void);

extern int g_8aaed0;

__declspec(naked) void FUN_0074b3f0(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        push    0
        push    0
        push    1
        push    0
        push    0
        push    0
        call    FUN_0074b380
        push    0
        push    0
        push    2
        push    0
        push    0
        push    0
        call    FUN_0074b380
        push    0
        push    1
        push    0
        push    0
        push    0
        push    0
        call    FUN_0074b380
        push    0
        push    1
        push    2
        push    0
        push    0
        push    0
        call    FUN_0074b380
        push    0
        push    0
        push    2
        push    0
        push    0
        push    1
        call    FUN_0074b380
        push    0
        push    1
        push    2
        push    0
        push    0
        push    1
        call    FUN_0074b380
        push    0
        push    0
        push    0
        push    0
        push    0
        push    1
        call    FUN_0074b380
        push    0
        push    0
        push    1
        push    0
        push    0
        push    2
        call    FUN_0074b380
        push    0
        push    1
        push    2
        push    0
        push    1
        push    0
        call    FUN_0074b380
        push    0
        push    0
        push    0
        push    0
        push    1
        push    0
        call    FUN_0074b380
        push    0
        push    1
        push    2
        push    0
        push    1
        push    1
        call    FUN_0074b380
        push    0
        push    0
        push    1
        push    0
        push    1
        push    1
        call    FUN_0074b380
        push    0
        push    0
        push    2
        push    0
        push    1
        push    2
        call    FUN_0074b380
        push    0
        push    1
        push    3
        push    0
        push    0
        push    3
        call    FUN_0074b380
        push    0
        push    0
        push    3
        push    0
        push    1
        push    3
        call    FUN_0074b380
        push    0
        push    0
        push    0
        push    0
        push    0
        push    4
        call    FUN_0074b380
        push    0
        push    1
        push    0
        push    0
        push    1
        push    4
        call    FUN_0074b380
        xor     edi, edi
L_b516:
        mov     esi, 1
L_b51b:
        lea     ebx, [esi - 1]
        push    ebx
        push    0
        push    edi
        push    esi
        push    0
        push    edi
        call    FUN_0074b380
        push    ebx
        push    1
        push    edi
        push    esi
        push    1
        push    edi
        call    FUN_0074b380
        inc     esi
        cmp     esi, 4
        jl      L_b51b
        inc     edi
        cmp     edi, 3
        jl      L_b516
        mov     eax, dword ptr [g_8aaed0]
        test    eax, eax
        jz      L_b59e
        mov     ebx, 0x8b7b94
L_b552:
        mov     eax, ebx
        mov     edx, 3
L_b559:
        lea     esi, [eax + 0x1f0]
        mov     edi, eax
        mov     ecx, 8
        add     eax, 0x7c
        dec     edx
        rep     movsd
        jnz     L_b559
        add     ebx, 0x3e0
        cmp     ebx, 0x8b8ef4
        jl      L_b552
        mov     ecx, 8
        mov     esi, 0x8b7d08
        mov     edi, 0x8b7b18
        rep     movsd
        mov     ecx, 8
        mov     esi, 0x8b84c8
        mov     edi, 0x8b82d8
        rep     movsd
L_b59e:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
