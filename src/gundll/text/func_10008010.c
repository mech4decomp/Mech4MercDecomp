/*
 * FUN_10008010 (85 B) - __stdcall, RET 0x10. Crypto API: CryptDecrypt
 * wrapper (hKey = arg1->+0x04, hHash 0, Final 1, flags 0, pbData = arg2,
 * pdwDataLen = &arg3). On success writes the decrypted length to *arg4 and
 * returns 0; on failure returns GetLastError (mapped to 0x8007xxxx HRESULT).
 * All via IAT.
 *
 * CFLAGS: /O1
 */

extern void *g_10049034;   /* IAT: CryptDecrypt */
extern void *g_100490e4;   /* IAT: GetLastError */

__declspec(naked) void __stdcall FUN_10008010(void)
{
    __asm {
        mov     edx, dword ptr [esp + 8]
        mov     eax, dword ptr [esp + 0xc]
        push    esi
        lea     ecx, [esp + 0x10]
        push    ecx
        push    edx
        xor     esi, esi
        push    esi
        mov     dword ptr [esp + 0x1c], eax
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [eax + 4]
        push    1
        push    esi
        push    ecx
        call    dword ptr [g_10049034]
        test    eax, eax
        jne     L_55
        call    dword ptr [g_100490e4]
        test    eax, eax
        jl      L_61
        jle     L_61
        and     eax, 0xffff
        or      eax, 0x80070000
        pop     esi
        ret     0x10
L_55:
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [edx], eax
        mov     eax, esi
L_61:
        pop     esi
        ret     0x10
    }
}
