/*
 * FUN_0052aab0 (181 B) — Anti-tamper check function.
 * Checks two obfuscated flags and calls FUN_00536060 / FUN_00536190
 * if they are non-zero.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern __int64 __stdcall FUN_00536060(int);
extern int __stdcall FUN_00536190(__int64 val, int);

extern int *DAT_007dab44;
extern int DAT_007dab40;

__declspec(naked) int __stdcall FUN_0052aab0(void)
{
    __asm {
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [DAT_007dab40]

        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x4c]
        xor     ecx, 0x85739531
        jz      l_check2

        mov     ecx, dword ptr [eax + 0xc]
        push    1
        xor     ecx, 0x85739531
        call    FUN_00536060
        mov     ecx, eax
        or      ecx, edx
        jnz     l_call1_ret
        xor     eax, eax
        ret

    l_call1_ret:
        mov     ecx, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [ecx]

        xor     ecx, dword ptr [DAT_007dab40]

        mov     ecx, dword ptr [ecx + 0xc]
        push    1
        push    edx
        push    eax
        xor     ecx, 0x85739531
        call    FUN_00536190
        test    eax, eax
        jnz     l_check2
        ret

    l_check2:
        mov     edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]

        xor     eax, dword ptr [DAT_007dab40]

        mov     ecx, dword ptr [eax + 0x58]
        xor     ecx, 0x85739531
        jz      l_return1

        mov     ecx, dword ptr [eax + 0xc]
        push    2
        xor     ecx, 0x85739531
        call    FUN_00536060
        mov     ecx, eax
        or      ecx, edx
        jnz     l_call2_ret
        xor     eax, eax
        ret

    l_call2_ret:
        mov     ecx, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [ecx]

        xor     ecx, dword ptr [DAT_007dab40]

        mov     ecx, dword ptr [ecx + 0xc]
        push    2
        push    edx
        push    eax
        xor     ecx, 0x85739531
        call    FUN_00536190
        test    eax, eax
        jnz     l_return1
        ret

    l_return1:
        mov     eax, 1
        ret
    }
}
