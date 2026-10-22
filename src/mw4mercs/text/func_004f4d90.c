#include <windows.h>

extern void __fastcall FUN_0041FC90(void *this);
extern void __fastcall FUN_004D9DB0(void *this);

__declspec(naked) void __fastcall FUN_004F4D90(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x218]
        mov     dword ptr [esi], 0x7754A0
        call    FUN_0041FC90
        lea     ecx, [esi + 0x210]
        call    FUN_0041FC90
        mov     ecx, esi
        call    FUN_004D9DB0
        pop     esi
        ret
    }
}
