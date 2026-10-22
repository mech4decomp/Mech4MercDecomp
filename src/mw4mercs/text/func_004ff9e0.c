#include <windows.h>

extern int __stdcall FUN_005003E0(int a, int b);
extern void __stdcall FUN_0050D6A0(int a, int *b);

__declspec(naked) void __stdcall FUN_004FF9E0(int a, int b)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x8]
        push    eax
        push    ecx
        call    FUN_005003E0
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [eax + 0x4]
        lea     edx, [esp + 0x14]
        push    edx
        push    ecx
        call    FUN_0050D6A0
        add     esp, 0x10
        ret
    }
}
