/*
 * FUN_00554b00 (131 B) — __thiscall, RET 0x4.
 *
 * Checks conditions, calls FUN_0061acf0(0x8000)/FUN_0061ad20,
 * then calls FUN_00553bc0 with different args based on this+0x8dc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int FUN_0061acf0(int);
extern int FUN_0061ad20(int);
extern void FUN_00553bc0(int);

__declspec(naked) void FUN_00554b00(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x384]
        mov     ecx, dword ptr [eax + 0x10]
        shr     ecx, 0x13
        test    cl, 0x01
        jnz     done

        mov     al, byte ptr [esi + 0x589]
        test    al, al
        jnz     done

        mov     al, byte ptr [esi + 0x5ac]
        test    al, al
        jnz     done

        push    0x8000
        call    FUN_0061acf0
        mov     ecx, eax
        call    FUN_0061ad20
        test    al, al
        jz      done

        mov     edx, dword ptr [esp + 0x08]
        mov     eax, dword ptr [edx + 0x10]
        test    eax, eax
        jle     done

        mov     eax, dword ptr [esi + 0x8dc]
        test    eax, eax
        jnz     check_2

        push    0x02
        mov     ecx, esi
        call    FUN_00553bc0
        pop     esi
        ret     0x04

check_2:
        cmp     eax, 0x02
        jnz     check_1

        push    0x01
        mov     ecx, esi
        call    FUN_00553bc0
        pop     esi
        ret     0x04

check_1:
        cmp     eax, 0x01
        jnz     done

        push    0x00
        mov     ecx, esi
        call    FUN_00553bc0

done:
        pop     esi
        ret     0x04
    }
}
