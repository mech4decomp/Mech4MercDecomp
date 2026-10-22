/*
 * FUN_0063BDD0 (57 B) — __fastcall (ECX = this).
 *
 * If this[0x18] > 0, loops calling FUN_0041FD80(this+0x10) and zeroing a
 * byte at [ret+0x15c + i]. Sets this[0x1c] = 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *__fastcall FUN_0041fd80(void *this);

__declspec(naked) void __fastcall FUN_0063bdd0(void *this)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x18]
        xor     esi, esi
        test    eax, eax
        jle     l_short
        push    ebp
        lea     ebp, [edi + 0x10]
    l_loop:
        mov     ecx, ebp
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0x15c]
        mov     byte ptr [eax + esi*0x1], 0
        mov     eax, dword ptr [edi + 0x18]
        inc     esi
        cmp     esi, eax
        jl      l_loop
        pop     ebp
        mov     byte ptr [edi + 0x1c], 0
        pop     edi
        pop     esi
        ret
    l_short:
        mov     byte ptr [edi + 0x1c], 0
        pop     edi
        pop     esi
        ret
    }
}
