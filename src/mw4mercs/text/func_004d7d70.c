#include <windows.h>

extern int __stdcall FUN_00500890(void);
extern void __fastcall FUN_004D8980(void *this, int param);

__declspec(naked) void __fastcall FUN_004D7D70(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00500890
        cmp     dword ptr [esi + 0x17dc], 0xffffffff
        jz      l_done
        sub     eax, dword ptr [esi + 0x17e0]
        cmp     eax, 0x493e0
        jbe     l_done
        push    0
        mov     ecx, esi
        call    FUN_004D8980
    l_done:
        pop     esi
        ret
    }
}
