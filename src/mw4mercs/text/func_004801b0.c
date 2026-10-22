/*
 * FUN_004801B0 (59 B) — Index validation loop.
 *
 * __fastcall (ECX = this). Validates that all indices in an array
 * (at this+0x50) are less than the limit at this+0x0A.
 * Calls FUN_006FAB90 (assert) on failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __cdecl FUN_006fab90(const char *fmt, ...);

__declspec(naked) int __fastcall FUN_004801b0(int param1)
{
    __asm {
        push    esi
        push    edi
        mov     esi, ecx
        xor     edi, edi
        cmp     word ptr [esi + 0x54], di
        jbe     l_done
    l_loop:
        mov     eax, dword ptr [esi + 0x50]
        mov     cx, word ptr [eax + edi * 2]
        cmp     cx, word ptr [esi + 0x0a]
        jc      l_next
        push    0x76f6c4
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      l_next
        int     3
    l_next:
        xor     edx, edx
        mov     dx, word ptr [esi + 0x54]
        inc     edi
        cmp     edi, edx
        jl      l_loop
    l_done:
        pop     edi
        mov     al, 1
        pop     esi
        ret
    }
}
