/*
 * FUN_10007c30 (84 B) - __stdcall, RET 0x4. Crypto API: CryptCreateHash
 * (alg 0x8004) wrapper. On success stores the hash handle at arg1->+0x04 and
 * returns 0; on failure returns GetLastError (mapped to 0x8007xxxx HRESULT).
 * All via IAT.
 *
 * CFLAGS: /O1
 */

extern void *g_10049048;   /* IAT: CryptCreateHash */
extern void *g_100490e4;   /* IAT: GetLastError */

__declspec(naked) void __stdcall FUN_10007c30(void)
{
    __asm {
        push    ecx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [edi]
        lea     ecx, [esp + 8]
        push    ecx
        xor     esi, esi
        push    esi
        push    esi
        mov     dword ptr [esp + 0x14], esi
        mov     eax, dword ptr [eax + 8]
        push    0x8004
        push    eax
        call    dword ptr [g_10049048]
        test    eax, eax
        jne     L_75
        call    dword ptr [g_100490e4]
        cmp     eax, esi
        jl      L_7e
        jle     L_7e
        and     eax, 0xffff
        pop     edi
        or      eax, 0x80070000
        pop     esi
        pop     ecx
        ret     4
L_75:
        mov     edx, dword ptr [esp + 8]
        mov     dword ptr [edi + 4], edx
        mov     eax, esi
L_7e:
        pop     edi
        pop     esi
        pop     ecx
        ret     4
    }
}
