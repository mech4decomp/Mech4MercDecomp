/*
 * FUN_100440d7 (92 B) — __cdecl, RET.
 * Stream read helper: validates flags, reads EDI bytes via FUN_10040975,
 * updates state.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10040975(void);

__declspec(naked) void __cdecl FUN_100440d7(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        xor     ebx, ebx
        push    edi
        mov     eax, dword ptr [esi + 0xc]
        mov     ecx, eax
        and     ecx, 0x3
        cmp     cl, 0x2
        jnz     L124
        test    ax, 0x108
        jz      L124
        mov     eax, dword ptr [esi + 0x8]
        mov     edi, dword ptr [esi]
        sub     edi, eax
        test    edi, edi
        jle     L124
        push    edi
        push    eax
        push    dword ptr [esi + 0x10]
        call    FUN_10040975
        add     esp, 0xc
        cmp     eax, edi
        jnz     L11d
        mov     eax, dword ptr [esi + 0xc]
        test    al, 0x80
        jz      L124
        and     al, 0xfd
        mov     dword ptr [esi + 0xc], eax
        jmp     L124
    L11d:
        or      dword ptr [esi + 0xc], 0x20
        or      ebx, 0xffffffff
    L124:
        mov     eax, dword ptr [esi + 0x8]
        and     dword ptr [esi + 0x4], 0
        mov     dword ptr [esi], eax
        pop     edi
        mov     eax, ebx
        pop     esi
        pop     ebx
        ret
    }
}
