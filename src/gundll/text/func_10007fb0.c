/*
 * FUN_10007fb0 (90 B) — __stdcall, RET 0x14.
 * CryptEncrypt wrapper: calls CryptEncrypt via IAT, maps GetLastError
 * into an HRESULT on failure, stores the updated size on success.
 *
 * CFLAGS: /O1
 */

extern void *g_10049038;   /* CryptEncrypt IAT */
extern void *g_100490e4;   /* GetLastError IAT */

__declspec(naked) void __stdcall FUN_10007fb0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x10]
        push    esi
        push    ecx
        mov     ecx, dword ptr [esp + 0xc]
        lea     edx, [esp + 0x14]
        push    edx
        mov     edx, dword ptr [ecx + 0x4]
        mov     dword ptr [esp + 0x18], eax
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        xor     esi, esi
        push    esi
        push    0x1
        push    esi
        push    edx
        call    dword ptr [g_10049038]
        test    eax, eax
        jnz     L_10007ffa
        call    dword ptr [g_100490e4]
        test    eax, eax
        jl      L_10008006
        jle     L_10008006
        and     eax, 0xffff
        or      eax, 0x80070000
        pop     esi
        ret     0x14
    L_10007ffa:
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [eax], ecx
        mov     eax, esi
    L_10008006:
        pop     esi
        ret     0x14
    }
}
