#include <windows.h>

extern void __stdcall FUN_004084D0(int size);
extern void __fastcall FUN_004EF780(void *this, int a, int b, int c);
extern int DAT_007dc818;

__declspec(naked) void __stdcall FUN_004EF970(int a, int b)
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
        mov     ecx, dword ptr [DAT_007dc818]   ; mov ecx, [0x007DC818]
        push    edx
        push    ecx
        mov     ecx, eax
        call    FUN_004EF780
        ret
    l_null:
        xor     eax, eax
        ret
    }
}
