#include <windows.h>

extern int __fastcall FUN_004F33C0(void *this);
extern void __fastcall FUN_00416470(void *this);

__declspec(naked) void __stdcall FUN_004F33D0(void *param)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        lea     ebx, [esi + 0x10]
        mov     edi, ecx
        push    ebx
        call    FUN_004F33C0
        test    eax, eax
        jnz     l_done
        push    ebx
        push    esi
        lea     ecx, [edi + 0x2c]
        call    FUN_00416470
    l_done:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     4
    }
}
