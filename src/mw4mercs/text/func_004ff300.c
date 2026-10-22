#include <windows.h>

extern void __stdcall FUN_0050D620(void *ptr);
extern void __stdcall FUN_005008D0(void);

extern int DAT_0076b2d0;   /* function pointer (0x0076B2D0) */

__declspec(naked) void __stdcall FUN_004FF300(void *ptr)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0x4]
        push    edi
        push    eax
        call    FUN_0050D620
        mov     ecx, dword ptr [esi + 0x8]
        mov     edi, dword ptr [DAT_0076b2d0]   ; mov edi, [0x0076B2D0]
        push    ecx
        call    edi
        push    esi
        call    edi
        add     esp, 0xc
        call    FUN_005008D0
        pop     edi
        pop     esi
        ret
    }
}
