/*
 * FUN_00486F40 (33 B) — MLR destructor helper (__fastcall, ECX=this).
 *
 * Sets vtable to 0x76fc38, frees field_18 if non-null, then sets vtable to 0x76d3f0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_00486f40(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x76fc38      ; mov dword ptr [esi], 0x76fc38
        mov     eax, [esi + 0x18]
        test    eax, eax
        jz      l_skip_free
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_skip_free:
        mov     dword ptr [esi], 0x76d3f0      ; mov dword ptr [esi], 0x76d3f0
        pop     esi
        ret
    }
}
