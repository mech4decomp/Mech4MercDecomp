/*
 * FUN_0048a910 (86 B) — Init globals and call setup.
 *
 * __fastcall (ECX = this). Zeroes 0x40 bytes at 0x7da794, sets several
 * globals to 0, calls FUN_004911e0, then calls FUN_004916d0 with
 * (this+0x0c, 0, 0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_004911e0(void *this);
extern void __fastcall FUN_004916d0(void *this, int a, int b, int c);

extern int DAT_007da790;
extern int DAT_007da794;
extern int DAT_007da7d8;
extern int DAT_007da7f0;
extern int DAT_007da7f4;

__declspec(naked) void __fastcall FUN_0048a910(int param1)
{
    __asm {
        sub     esp, 0x08
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        xor     ebx, ebx
        xor     eax, eax
        mov     ecx, 0x10
        mov     edi, 0x007da794
        rep stosd
        lea     ecx, [esp + 0x0c]
        mov     dword ptr [DAT_007da7d8], ebx
        mov     dword ptr [DAT_007da790], ebx
        mov     dword ptr [DAT_007da7f4], ebx
        mov     dword ptr [DAT_007da7f0], ebx
        call    FUN_004911e0
        mov     ecx, dword ptr [esi + 0x0c]
        mov     eax, dword ptr [esi + 0x08]
        push    ebx
        push    ebx
        push    ecx
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x18], eax
        call    FUN_004916d0
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x08
        ret
    }
}
