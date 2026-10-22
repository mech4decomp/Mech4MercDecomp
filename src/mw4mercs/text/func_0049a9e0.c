#include <windows.h>

extern void __fastcall FUN_00415200(void *this);
extern void __stdcall FUN_004084e0(void *ptr);

extern int DAT_007da96c;

__declspec(naked) void FUN_0049a9e0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [DAT_007da96c]   ; mov esi, [0x007da96c]
        test    esi, esi
        jz      l_zero
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_zero:
        mov     dword ptr [DAT_007da96c], 0     ; mov dword ptr [0x007da96c], 0
        pop     esi
        ret
    }
}
