/*
 * FUN_10007510 (93 B) - __stdcall, RET 0xc.  Crypto helper: acquires a
 * provider via FUN_10007ac0, then calls an IAT crypto routine (0x10049010)
 * with (key, 4, arg2, &arg3, 0), null-terminates arg2[arg3] on success, and
 * maps GetLastError (IAT 0x100490e4) into an HRESULT.  Returns an
 * HRESULT-style code.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049010;   /* IAT: crypto routine (CryptEncrypt-family) */
extern void *g_100490e4;   /* IAT: GetLastError */
extern void __stdcall FUN_10007ac0(void);   /* rel32 call, RET 0x8 (2 args) */

__declspec(naked) void __stdcall FUN_10007510(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    esi
        push    edi
        push    0
        push    ebx
        call    FUN_10007ac0
        mov     esi, eax
        test    esi, esi
        jl      L_7565
        mov     edi, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [ebx + 8]
        push    0
        lea     eax, [esp + 0x1c]
        push    eax
        push    edi
        push    4
        push    ecx
        call    dword ptr [g_10049010]
        test    eax, eax
        jne     L_755d
        call    dword ptr [g_100490e4]
        test    eax, eax
        jl      L_7567
        jle     L_7567
        pop     edi
        and     eax, 0xffff
        pop     esi
        or      eax, 0x80070000
        pop     ebx
        ret     0xc
L_755d:
        mov     edx, dword ptr [esp + 0x18]
        mov     byte ptr [edi + edx], 0
L_7565:
        mov     eax, esi
L_7567:
        pop     edi
        pop     esi
        pop     ebx
        ret     0xc
    }
}
