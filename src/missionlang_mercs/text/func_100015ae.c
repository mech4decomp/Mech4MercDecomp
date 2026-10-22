/*
 * FUN_100015ae (84 B) — free the stdio handle table: delete each block's
 * critical sections, free each block, then zero the table.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void (__stdcall *g_DeleteCriticalSection)(void *); /* IAT 0x10004038 */

extern void __cdecl FUN_10001e0f(void *);

__declspec(naked) void __stdcall FUN_100015ae(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     esi, 0x100057c0
L_b6:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_f3
        mov     edi, eax
        add     eax, 0x480
        cmp     edi, eax
        jnc     L_e8
        lea     ebx, [edi + 0xc]
L_ca:
        cmp     dword ptr [ebx - 4], 0
        jz      L_d7
        push    ebx
        call    dword ptr [g_DeleteCriticalSection]
L_d7:
        mov     eax, dword ptr [esi]
        add     edi, 0x24
        add     eax, 0x480
        add     ebx, 0x24
        cmp     edi, eax
        jc      L_ca
L_e8:
        push    dword ptr [esi]
        call    FUN_10001e0f
        and     dword ptr [esi], 0
        pop     ecx
L_f3:
        add     esi, 4
        cmp     esi, 0x100058c0
        jl      L_b6
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
