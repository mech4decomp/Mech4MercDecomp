/*
 * FUN_005CD820 (41 B) — __cdecl, RET 0 (3 params).
 * Copies (param2-param1)/4 dwords from param1 to param3; returns
 * param3 + count (end pointer), or param3 if count <= 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) void FUN_005cd820(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        sub     eax, esi
        sar     eax, 0x2
        test    eax, eax
        jle     l_843
        mov     edx, dword ptr [esp + 0x10]
        push    edi
        mov     ecx, eax
        mov     edi, edx
        rep movsd
        pop     edi
        lea     eax, [edx + eax * 4]
        pop     esi
        ret
    l_843:
        mov     eax, dword ptr [esp + 0x10]
        pop     esi
        ret
    }
}
