/*
 * FUN_10007da0 (198 B) - __stdcall, RET 0xc. Crypto API: CryptCreateHash /
 * CryptHashData / CryptDeriveKey, with GetLastError + CryptDestroyKey/Hash
 * cleanup. All via IAT.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void *g_10049048;   /* IAT: CryptCreateHash */
extern void *g_100490e4;   /* IAT: GetLastError */
extern void *g_1004905c;   /* IAT: CryptDestroyKey */
extern void *g_10049058;   /* IAT: CryptDestroyHash */
extern void *g_10049044;   /* IAT: CryptHashData */
extern void *g_1004903c;   /* IAT: CryptDeriveKey */

__declspec(naked) void __stdcall FUN_10007da0(void)
{
    __asm {
        sub     esp, 8
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [ebx]
        push    esi
        push    edi
        lea     ecx, [esp + 0x10]
        push    ecx
        xor     esi, esi
        push    esi
        push    esi
        mov     dword ptr [esp + 0x1c], 0
        mov     dword ptr [esp + 0x18], 0
        mov     edi, dword ptr [eax + 8]
        push    0x8003
        push    edi
        call    dword ptr [g_10049048]
        test    eax, eax
        jnz     L_e1b
L_dd8:
        call    dword ptr [g_100490e4]
        test    eax, eax
        jge     L_e0d
L_de2:
        mov     esi, eax
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      L_df3
        push    eax
        call    dword ptr [g_1004905c]
L_df3:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      L_e02
        push    eax
        call    dword ptr [g_10049058]
L_e02:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 8
        ret     0xc
L_e0d:
        jle     L_de2
        and     eax, 0xffff
        or      eax, 0x80070000
        jmp     L_de2
L_e1b:
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x10]
        push    0
        push    edx
        push    eax
        push    ecx
        call    dword ptr [g_10049044]
        test    eax, eax
        jz      L_dd8
        mov     eax, dword ptr [esp + 0x10]
        lea     edx, [esp + 0xc]
        push    edx
        push    0x280001
        push    eax
        push    0x6801
        push    edi
        call    dword ptr [g_1004903c]
        test    eax, eax
        jz      L_dd8
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [ebx + 4], ecx
        mov     dword ptr [esp + 0xc], 0
        jmp     L_df3
    }
}
