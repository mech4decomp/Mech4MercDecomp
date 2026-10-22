/*
 * FUN_0048fef0 (43 B) — __fastcall (ECX = this).
 * Sets vtable to 0x76ff30, decrements refcount at [this+0x7c]-1,
 * frees if refcount reaches 0, then sets vtable to 0x76d3f0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_004084e0(void *ptr);

#define PTR_FUN_0076ff30 0x0076ff30
#define PTR_LAB_0076d3f0 0x0076d3f0

__declspec(naked) void __fastcall FUN_0048fef0(void *param_1)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], PTR_FUN_0076ff30
        mov     eax, dword ptr [esi + 0x7c]
        test    eax, eax
        jz      l_set_vtable
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_set_vtable
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
    l_set_vtable:
        mov     dword ptr [esi], PTR_LAB_0076d3f0
        pop     esi
        ret
    }
}
