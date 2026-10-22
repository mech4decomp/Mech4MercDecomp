/*
 * FUN_004AA4D0 (79 B) — __thiscall MLR particle-count clamp (RET 0x4).
 *   If this->0x268 > 0x400, clamps it to 0x400 and (if arg non-zero) emits
 *   a warning via FUN_006FABF0, then calls FUN_004ABCC0(this, arg).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_004abcc0(void);

__declspec(naked) void __fastcall FUN_004aa4d0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        mov     ebx, dword ptr [ebp + 8]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x268]
        mov     eax, 0x400
        cmp     ecx, eax
        jle     l_509
        test    bl, bl
        jz      l_517
        mov     dword ptr [esi + 0x268], eax
        mov     eax, dword ptr [esi + 4]
        push    eax
        push    0x7b30d4
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      l_509
        int     3
    l_509:
        push    ebx
        mov     ecx, esi
        call    FUN_004abcc0
        pop     esi
        pop     ebx
        pop     ebp
        ret     4
    l_517:
        pop     esi
        xor     al, al
        pop     ebx
        pop     ebp
        ret     4
    }
}
