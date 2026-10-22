#include <windows.h>

extern void __stdcall FUN_004084D0(int size);
extern void __fastcall FUN_004EFAE0(void *this, int a, int b, int c);
extern int DAT_007dc81c;

__declspec(naked) void __stdcall FUN_004EFC50(int a, int b)
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
        mov     ecx, dword ptr [DAT_007dc81c]   ; mov ecx, [0x007DC81C]
        push    edx
        push    ecx
        mov     ecx, eax
        call    FUN_004EFAE0
        ret
    l_null:
        xor     eax, eax
        ret
    }
}
