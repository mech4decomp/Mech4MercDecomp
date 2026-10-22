/*
 * FUN_0049A720 (114 B) — __thiscall, RET.
 * MLR particle/flare subsystem. Destructor: frees a refcounted buffer and
 * several owned allocations, then calls the base destructor.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004937f0(void);

__declspec(naked) void FUN_0049a720(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x7701f8
        mov     eax, dword ptr [esi + 0xbc]
        test    eax, eax
        jz      l_skip1
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip1
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_skip1:
        mov     eax, dword ptr [esi + 0x88]
        test    eax, eax
        jz      l_skip2
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_skip2:
        mov     eax, dword ptr [esi + 0x7c]
        test    eax, eax
        jz      l_skip3
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_skip3:
        mov     eax, dword ptr [esi + 0x70]
        test    eax, eax
        jz      l_skip4
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_skip4:
        mov     eax, dword ptr [esi + 0x64]
        test    eax, eax
        jz      l_skip5
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_skip5:
        mov     ecx, esi
        call    FUN_004937f0
        pop     esi
        ret
    }
}
