/*
 * FUN_10007ac0 (200 B) - __stdcall, RET 0x8. Acquires a crypto provider
 * context (CryptAcquireContextA via IAT 0x10049000 loaded into ebp), with
 * GetLastError handling and a retry with CRYPT_NEWKEYSET.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void *g_10049000;   /* IAT: CryptAcquireContextA */
extern void *g_100490e4;   /* IAT: GetLastError */
extern char g_100501bc[];  /* "Microsoft Base Cryptographic Provider..." */
extern char g_10050194[];  /* "Microsoft Strong Cryptographic Provider..." */

__declspec(naked) void __stdcall FUN_10007ac0(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        mov     al, byte ptr [esi]
        push    edi
        xor     edi, edi
        test    al, al
        jnz     L_ade
        mov     edi, 0xc1120008
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
L_ade:
        mov     eax, dword ptr [esi + 8]
        test    eax, eax
        jz      L_aee
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     8
L_aee:
        mov     al, byte ptr [esi + 1]
        test    al, al
        mov     ebx, offset g_100501bc
        jnz     L_aff
        mov     ebx, offset g_10050194
L_aff:
        mov     eax, dword ptr [esi + 4]
        mov     ebp, dword ptr [g_10049000]
        push    0
        push    1
        push    ebx
        push    eax
        lea     ecx, [esp + 0x24]
        push    ecx
        call    ebp
        test    eax, eax
        jnz     L_b78
        call    dword ptr [g_100490e4]
        mov     edi, eax
        mov     al, byte ptr [esp + 0x18]
        test    al, al
        jz      L_b7f
        cmp     edi, 0x80090016
        jnz     L_b7f
        mov     edx, dword ptr [esi + 4]
        push    8
        push    1
        push    ebx
        push    edx
        lea     eax, [esp + 0x24]
        push    eax
        xor     edi, edi
        call    ebp
        test    eax, eax
        jnz     L_b78
        call    dword ptr [g_100490e4]
        test    eax, eax
        jge     L_b5a
        mov     edi, eax
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
L_b5a:
        jg      L_b65
        mov     edi, eax
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
L_b65:
        and     eax, 0xffff
        or      eax, 0x80070000
        mov     edi, eax
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
L_b78:
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 8], ecx
L_b7f:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
    }
}
