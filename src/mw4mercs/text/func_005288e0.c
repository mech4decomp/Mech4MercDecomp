// FUN_005288E0 (106 bytes)
#include <windows.h>

extern void *__stdcall FUN_006f3c80(int size, int context);
extern void __cdecl FUN_006f4230(void *ptr);

__declspec(naked) void func_005288e0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        mov     esi, dword ptr [eax + 4]
        mov     eax, dword ptr [ecx + 0x40EE8]
        test    eax, eax
        push    edi
        jz      l_ret0
        mov     edi, dword ptr [eax + 0x5C]
        test    edi, edi
        jz      l_ret0
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      l_skip_free
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi], 0
    l_skip_free:
        push    0
        push    0x100
        call    FUN_006f3c80
        or      ecx, -1
        mov     edx, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     dword ptr [esi], edx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        pop     edi
        mov     eax, 1
        pop     esi
        ret     8
    l_ret0:
        pop     edi
        xor     eax, eax
        pop     esi
        ret     8
    }
}
