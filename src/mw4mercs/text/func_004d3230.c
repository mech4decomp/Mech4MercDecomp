#include <windows.h>

extern void __fastcall FUN_00415180(int param);
extern void __fastcall FUN_004D3280(void *this, int param);
extern int DAT_007b8c10;

__declspec(naked) void __fastcall FUN_004D3230(void *this)
{
    __asm {
        mov     eax, dword ptr [DAT_007b8c10]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        xor     eax, eax
        push    1
        mov     ecx, esi
        mov     dword ptr [esi + 0x8], eax
        mov     dword ptr [esi + 0xc], eax
        mov     dword ptr [esi], 0x772770
        call    FUN_004D3280
        mov     eax, esi
        pop     esi
        ret
    }
}
