#include <windows.h>

extern void __fastcall FUN_004169C0(void *this);
extern void __fastcall FUN_00415380(void *this);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_004D3A20(void *this, int flags)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x10]
        call    FUN_004169C0
        mov     ecx, esi
        call    FUN_00415380
        test    byte ptr [esp + 0x8], 1
        jz      l_skip
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_skip:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
