/*
 * FUN_00553d20 (134 B) — __fastcall, RET 4.
 *
 * Calls FUN_0061acf0(8) then FUN_0061ad20(). If result AL is 0, returns 0.
 * If byte at this+0x8fc is set, returns AL with upper bytes zeroed.
 * Otherwise checks fields at offsets 0x46c..0x484 for non-zero,
 * returning 1 if any is non-zero, else setnz of field at 0x484.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int FUN_0061acf0(int);
extern int FUN_0061ad20(int);

__declspec(naked) void FUN_00553d20(void)
{
    __asm {
        push    esi
        push    0x08
        mov     esi, ecx
        call    FUN_0061acf0
        mov     ecx, eax
        call    FUN_0061ad20
        test    al, al
        jnz     check_active
        pop     esi
        ret

check_active:
        mov     al, byte ptr [esi + 0x8fc]
        test    al, al
        jz      check_46c
        xor     al, al
        pop     esi
        ret

check_46c:
        mov     eax, dword ptr [esi + 0x46c]
        test    eax, eax
        jz      check_470
        mov     al, 0x01
        pop     esi
        ret

check_470:
        mov     eax, dword ptr [esi + 0x470]
        test    eax, eax
        jz      check_474
        mov     al, 0x01
        pop     esi
        ret

check_474:
        mov     eax, dword ptr [esi + 0x474]
        test    eax, eax
        jz      check_478
        mov     al, 0x01
        pop     esi
        ret

check_478:
        mov     eax, dword ptr [esi + 0x478]
        test    eax, eax
        jz      check_47c
        mov     al, 0x01
        pop     esi
        ret

check_47c:
        mov     eax, dword ptr [esi + 0x47c]
        test    eax, eax
        jz      check_480
        mov     al, 0x01
        pop     esi
        ret

check_480:
        mov     eax, dword ptr [esi + 0x480]
        test    eax, eax
        jz      check_484
        mov     al, 0x01
        pop     esi
        ret

check_484:
        mov     eax, dword ptr [esi + 0x484]
        test    eax, eax
        setnz   al
        pop     esi
        ret
    }
}
