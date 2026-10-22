#include <windows.h>

extern void __stdcall FUN_004084D0(int size);
extern void __fastcall FUN_004EE590(void *this, int a, int b, int c);

extern int DAT_007dc804;   /* singleton pointer */

__declspec(naked) void __stdcall FUN_004EE860(int a, int b)
{
    __asm {
        push    0x28
        call    FUN_004084D0
        add     esp, 4
        test    eax, eax
        jz      l_null
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [esp + 0x4]
        push    ecx
        mov     ecx, dword ptr [DAT_007dc804]   ; mov ecx, [0x007DC804]
        push    edx
        push    ecx
        mov     ecx, eax
        call    FUN_004EE590
        ret
    l_null:
        xor     eax, eax
        ret
    }
}
