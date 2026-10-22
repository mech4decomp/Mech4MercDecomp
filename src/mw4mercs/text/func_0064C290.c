/*
 * FUN_0064C290 (72 B) — __stdcall, 3 args (ret 0xc), ecx=this. Looks up an
 * object, checks its state, and copies a dword array via rep movsd.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_0064bf90(void);

__declspec(naked) void FUN_0064C290(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    edi
        push    0
        push    0
        mov     edi, ecx
        push    eax
        call    FUN_0064bf90
        test    eax, eax
        jne     l_1
        mov     eax, 1
        pop     edi
        ret     0xc
    l_1:
        cmp     dword ptr [eax + 0x1c], 1
        je      l_2
        mov     eax, 3
        pop     edi
        ret     0xc
    l_2:
        mov     edx, dword ptr [eax + 0x20]
        mov     eax, dword ptr [edi + 0x24]
        mov     edi, dword ptr [eax + edx*4]
        mov     ecx, dword ptr [esp + 0xc]
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        rep     movsd
        pop     esi
        xor     eax, eax
        pop     edi
        ret     0xc
    }
}
