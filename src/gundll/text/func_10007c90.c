/*
 * FUN_10007c90 (64 B) - __stdcall, RET 0xc. Crypto API: CryptHashData
 * wrapper (hHash = arg1->+0x04, pbData = arg2, dwDataLen = arg3, flags 0).
 * Returns 0 on success; on failure returns GetLastError (mapped to
 * 0x8007xxxx HRESULT). All via IAT.
 *
 * CFLAGS: /O1
 */

extern void *g_10049044;   /* IAT: CryptHashData */
extern void *g_100490e4;   /* IAT: GetLastError */

__declspec(naked) void __stdcall FUN_10007c90(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        push    esi
        xor     esi, esi
        push    esi
        push    eax
        mov     eax, dword ptr [edx + 4]
        push    ecx
        push    eax
        call    dword ptr [g_10049044]
        test    eax, eax
        jne     L_cca
        call    dword ptr [g_100490e4]
        test    eax, eax
        jl      L_ccc
        jle     L_ccc
        and     eax, 0xffff
        or      eax, 0x80070000
        pop     esi
        ret     0xc
L_cca:
        mov     eax, esi
L_ccc:
        pop     esi
        ret     0xc
    }
}
