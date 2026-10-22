/*
 * FUN_10044d58 (110 B) — __cdecl, RET.
 * Buffer/stream write helper: validates flags, grows buffer, writes a
 * byte, returns param_1 & 0xff or 0xffffffff on failure.
 *
 * CFLAGS: /O1
 */

extern void FUN_10040b65(void);

__declspec(naked) void __cdecl FUN_10044d58(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 8]
        cmp     ebx, -1
        push    esi
        jz      L_da4
        mov     esi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esi + 0xc]
        test    al, 1
        jnz     L_d76
        test    al, 80h
        jz      L_da4
        test    al, 2
        jnz     L_da4
    L_d76:
        cmp     dword ptr [esi + 8], 0
        jnz     L_d83
        push    esi
        call    FUN_10040b65
        pop     ecx
    L_d83:
        mov     eax, dword ptr [esi]
        cmp     eax, dword ptr [esi + 8]
        jnz     L_d93
        cmp     dword ptr [esi + 4], 0
        jnz     L_da4
        inc     eax
        mov     dword ptr [esi], eax
    L_d93:
        test    byte ptr [esi + 0xc], 40h
        jz      L_daa
        dec     dword ptr [esi]
        mov     eax, dword ptr [esi]
        cmp     byte ptr [eax], bl
        jz      L_db0
        inc     eax
        mov     dword ptr [esi], eax
    L_da4:
        or      eax, 0FFFFFFFFh
    L_da7:
        pop     esi
        pop     ebx
        ret
    L_daa:
        dec     dword ptr [esi]
        mov     eax, dword ptr [esi]
        mov     byte ptr [eax], bl
    L_db0:
        mov     eax, dword ptr [esi + 0xc]
        inc     dword ptr [esi + 4]
        and     al, 0EFh
        or      al, 1
        mov     dword ptr [esi + 0xc], eax
        mov     eax, ebx
        and     eax, 0FFh
        jmp     L_da7
    }
}
