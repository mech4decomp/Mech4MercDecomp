#include <windows.h>

extern void __fastcall FUN_004DABC0(void *this);

__declspec(naked) void __fastcall FUN_004DB210(void *this)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0xbc]
    l_loop:
        test    esi, esi
        jz      l_end
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi + 0x4]
        jz      l_end
        call    FUN_004DB210
        jmp     l_loop
    l_end:
        mov     ecx, edi
        call    FUN_004DABC0
        pop     edi
        pop     esi
        ret
    }
}
