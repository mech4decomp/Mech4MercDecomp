/*
 * FUN_0065D280 (71 B) — __cdecl, no args. Walks an obfuscated pointer chain
 * and calls FUN_0065d250 with a resolved object pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_0065d250(void);

__declspec(naked) void FUN_0065D280(void)
{
    __asm {
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0x18]
        xor     edx, 0x85739531
        lea     eax, [ecx + 0x18]
        je      l_ret0
        mov     eax, dword ptr [eax]
        xor     eax, 0x85739531
        je      l_ret0
        mov     eax, dword ptr [eax + 0x178]
        test    eax, eax
        je      l_ret0
        mov     ecx, dword ptr [eax + 0x384]
        test    ecx, ecx
        je      l_ret0
        mov     eax, ecx
        push    eax
        call    FUN_0065d250
        add     esp, 4
        ret
    l_ret0:
        xor     eax, eax
        ret
    }
}
