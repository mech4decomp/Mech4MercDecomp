#include <windows.h>

extern void __cdecl FUN_00494960(void);
extern int DAT_007da968;

__declspec(naked) void __fastcall FUN_0049ae90(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00494960
        mov     ecx, dword ptr [DAT_007da968]   ; mov ecx, [0x007da968]
        mov     edx, dword ptr [esi + 0xa0]
        mov     eax, dword ptr [ecx]
        push    edx
        call    dword ptr [eax + 8]
        mov     dword ptr [esi + 0xa0], 0
        pop     esi
        ret
    }
}
