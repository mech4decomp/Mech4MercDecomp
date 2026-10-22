#include <windows.h>

extern void __stdcall FUN_004FF300(void *ptr);

__declspec(naked) void __stdcall FUN_004D7300(void *this, void *param)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0x15c]
        test    eax, eax
        jz      l_skip
        push    eax
        call    FUN_004FF300
        add     esp, 4
        mov     dword ptr [esi + 0x15c], 0
    l_skip:
        mov     al, 1
        pop     esi
        ret     4
    }
}
