/*
 * FUN_0065CCC0 (57 B) — __fastcall (ECX = this).
 *
 * If this[0x40] == 1, returns 0. Otherwise calls FUN_0041C540(this+0x18,
 * this+0x24, DAT_007B220C); returns 0 if it fails and this[0x3c] < 1,
 * else returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int g_7b220c;   /* DAT_007B220C */
extern char __cdecl FUN_0041c540(void *a, void *b, int c);

__declspec(naked) int __fastcall FUN_0065ccc0(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx
        cmp     byte ptr [esi + 0x40], 0x1
        jnz     l_check
        xor     al, al
        pop     esi
        ret
    l_check:
        mov     eax, dword ptr [g_7b220c]
        push    eax
        lea     ecx, [esi + 0x24]
        push    ecx
        lea     edx, [esi + 0x18]
        push    edx
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jnz     l_ret1
        mov     eax, dword ptr [esi + 0x3c]
        test    eax, eax
        jg      l_ret1
        xor     eax, eax
        pop     esi
        ret
    l_ret1:
        mov     eax, 0x1
        pop     esi
        ret
    }
}
