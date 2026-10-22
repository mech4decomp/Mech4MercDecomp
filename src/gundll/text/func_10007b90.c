/*
 * FUN_10007b90 (108 B) — __stdcall, RET 0x4 (1 param).
 * CryptGetUserKey wrapper: get user key, store in obj, map error codes.
 */

extern void *g_10049054;   /* IAT: CryptGetUserKey */
extern void *g_100490e4;   /* IAT: GetLastError */
extern void __stdcall FUN_10007ac0(void);

__declspec(naked) void __stdcall FUN_10007b90(void)
{
    __asm {
        push    ecx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [edi + 0x8]
        xor     esi, esi
        test    eax, eax
        mov     dword ptr [esp + 0x8], 0x0
        jnz     L1
        push    esi
        push    edi
        call    FUN_10007ac0
        mov     esi, eax
        test    esi, esi
        jl      L4
    L1:
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        jnz     L4
        mov     ecx, dword ptr [edi + 0x8]
        lea     eax, [esp + 0x8]
        push    eax
        push    0x1
        push    ecx
        call    dword ptr [g_10049054]   /* CryptGetUserKey */
        test    eax, eax
        jnz     L3
        call    dword ptr [g_100490e4]   /* GetLastError */
        test    eax, eax
        jl      L6
        jle     L6
        and     eax, 0xffff
        pop     edi
        or      eax, 0x80070000
        pop     esi
        pop     ecx
        ret     0x4
    L3:
        mov     edx, dword ptr [esp + 0x8]
        mov     dword ptr [edi + 0xc], edx
    L4:
        mov     eax, esi
    L6:
        pop     edi
        pop     esi
        pop     ecx
        ret     0x4
    }
}
