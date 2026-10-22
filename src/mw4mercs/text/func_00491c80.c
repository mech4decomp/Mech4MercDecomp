/*
 * FUN_00491c80 (66 B) — __fastcall (ECX=ptr).
 * Destructor: clears vtable, releases resources, decrements refcount.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_00717c10(int);
extern void __cdecl FUN_004084e0(void *);
extern void __fastcall FUN_00415380(void);

__declspec(naked) void __fastcall FUN_00491c80(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        test    byte ptr [esi + 0x18], 0x1
        mov     dword ptr [esi], 0x7700e8
        jz      l_skip_release
        mov     eax, dword ptr [esi + 0x1c]
        push    eax
        call    FUN_00717c10
    l_skip_release:
        mov     eax, dword ptr [esi + 0x10]
        test    eax, eax
        mov     dword ptr [esi + 0x18], 0x0
        jz      l_skip_free
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_free
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_skip_free:
        mov     ecx, esi
        call    FUN_00415380
        pop     esi
        ret
    }
}
