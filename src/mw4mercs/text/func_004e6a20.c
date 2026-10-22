#include <windows.h>

extern void __fastcall FUN_004D5D20(void *this);
extern void __stdcall FUN_004084e0(void *ptr);
extern int DAT_007dc774;

__declspec(naked) void FUN_004E6A20(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [DAT_007dc774]
        test    esi, esi
        jz      l_skip
        mov     ecx, esi
        call    FUN_004D5D20
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_skip:
        mov     dword ptr [DAT_007dc774], 0
        pop     esi
        ret
    }
}
