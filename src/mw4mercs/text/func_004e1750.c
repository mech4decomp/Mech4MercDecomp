#include <windows.h>

extern void __fastcall FUN_004C3D50(void *this, int param);

__declspec(naked) void __fastcall FUN_004E1750(void *this, int param)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        xor     edx, edx
        cmp     eax, edx
        jnz     l_nonzero
        mov     dword ptr [ecx + 0x48], edx
        mov     dword ptr [ecx + 0x4c], edx
        ret     4
    l_nonzero:
        mov     dword ptr [ecx + 0x48], eax
        mov     ecx, dword ptr [ecx + 0x4c]
        cmp     ecx, edx
        jz      l_ret
        mov     ecx, dword ptr [ecx + 0x24]
        push    eax
        call    FUN_004C3D50
    l_ret:
        ret     4
    }
}
