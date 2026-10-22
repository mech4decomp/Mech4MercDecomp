/*
 * FUN_10007830 (78 B) - __stdcall, RET 0xc. Generates random bytes via
 * IAT 0x10049050 (CryptGenRandom), maps GetLastError (IAT 0x100490e4)
 * to an HRESULT.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10049050;   /* IAT: CryptGenRandom */
extern void *g_100490e4;   /* IAT: GetLastError */
extern void __cdecl FUN_10007ac0(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10007830(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        push    1
        push    edi
        call    FUN_10007ac0
        mov     esi, eax
        test    esi, esi
        jl      L_877
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [edi + 8]
        push    eax
        push    ecx
        push    edx
        call    dword ptr [g_10049050]
        test    eax, eax
        jnz     L_877
        call    dword ptr [g_100490e4]
        test    eax, eax
        jl      L_879
        jle     L_879
        and     eax, 0xffff
        pop     edi
        or      eax, 0x80070000
        pop     esi
        ret     0xc
L_877:
        mov     eax, esi
L_879:
        pop     edi
        pop     esi
        ret     0xc
    }
}
