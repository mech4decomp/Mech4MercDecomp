/*
 * FUN_10007730 (109 B) - __stdcall, RET 0x8. Imports a crypto key via
 * IAT 0x10049004 (CryptImportKey), maps GetLastError (IAT 0x100490e4)
 * to an HRESULT, destroys a prior key (IAT 0x1004905c).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10049004;   /* IAT: CryptImportKey */
extern void *g_100490e4;   /* IAT: GetLastError */
extern void *g_1004905c;   /* IAT: CryptDestroyKey */
extern void __cdecl FUN_10007ac0(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10007730(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        push    edi
        push    1
        push    esi
        call    FUN_10007ac0
        mov     edi, eax
        test    edi, edi
        jl      L_796
        lea     eax, [esp + 0xc]
        push    eax
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 4]
        mov     eax, dword ptr [esi + 8]
        push    0
        push    0
        push    ecx
        push    edx
        push    eax
        call    dword ptr [g_10049004]
        test    eax, eax
        jnz     L_781
        call    dword ptr [g_100490e4]
        test    eax, eax
        jl      L_798
        jle     L_798
        and     eax, 0xffff
        pop     edi
        or      eax, 0x80070000
        pop     esi
        ret     8
L_781:
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        jz      L_78f
        push    eax
        call    dword ptr [g_1004905c]
L_78f:
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [esi + 0xc], ecx
L_796:
        mov     eax, edi
L_798:
        pop     edi
        pop     esi
        ret     8
    }
}
