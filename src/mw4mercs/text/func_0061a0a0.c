/*
 * FUN_0061a0a0 (62 B) — __cdecl, RET 4.
 *
 * Allocates 0x18 bytes via FUN_004084d0, copies fields from param_1
 * (dword at +0x14), increments a refcount, returns the new object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *__cdecl FUN_004084d0(int size);

__declspec(naked) void __cdecl FUN_0061a0a0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x08]   ; param_1
        push    0x18
        call    FUN_004084d0
        lea     edx, [eax + 0x10]
        add     esp, 4
        test    edx, edx
        jz      L_skip
        mov     ecx, dword ptr [esi + 0x10]
        test    ecx, ecx
        mov     dword ptr [edx], ecx
        jz      L_inc_skip
        inc     byte ptr [ecx - 1]
    L_inc_skip:
        mov     ecx, dword ptr [esi + 0x14]
        mov     dword ptr [edx + 0x04], ecx
    L_skip:
        mov     dl, byte ptr [esi]
        mov     byte ptr [eax], dl
        mov     dword ptr [eax + 0x08], 0
        mov     dword ptr [eax + 0x0c], 0
        pop     esi
        ret     4
    }
}
