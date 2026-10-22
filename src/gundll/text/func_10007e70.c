/*
 * FUN_10007e70 (117 B) - __stdcall, RET 0xc. Crypto API: gets the user key
 * (FUN_10007b90), then CryptImportKey (IAT 0x10049004) with the key blob;
 * on success stores the imported key handle at arg1->+0x04 and returns 0;
 * on failure returns GetLastError (mapped to 0x8007xxxx HRESULT) and
 * destroys any partially-created key (IAT 0x1004905c).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10007b90(void);   /* rel32 call (stdcall def) */
extern void *g_10049004;   /* IAT: CryptImportKey */
extern void *g_100490e4;   /* IAT: GetLastError */
extern void *g_1004905c;   /* IAT: CryptDestroyKey */

__declspec(naked) void __stdcall FUN_10007e70(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        push    esi
        mov     esi, dword ptr [ebp]
        push    edi
        mov     edi, dword ptr [esi + 8]
        push    esi
        xor     ebx, ebx
        call    FUN_10007b90
        mov     esi, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x18]
        lea     eax, [esp + 0x14]
        push    eax
        push    ebx
        push    esi
        push    ecx
        push    edx
        push    edi
        call    dword ptr [g_10049004]
        test    eax, eax
        jne     L_ed5
        call    dword ptr [g_100490e4]
        test    eax, eax
        jl      L_ebb
        jle     L_ebb
        and     eax, 0xffff
        or      eax, 0x80070000
L_ebb:
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        je      L_ecc
        push    eax
        call    dword ptr [g_1004905c]
L_ecc:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
L_ed5:
        mov     eax, dword ptr [esp + 0x14]
        pop     edi
        pop     esi
        mov     dword ptr [ebp + 4], eax
        pop     ebp
        mov     eax, ebx
        pop     ebx
        ret     0xc
    }
}
