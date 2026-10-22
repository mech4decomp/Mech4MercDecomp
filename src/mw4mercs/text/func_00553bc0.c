/*
 * FUN_00553bc0 (149 B) — __thiscall, RET 4.
 *
 * Stores param to this+0x8dc. If param is 0 or 2, checks a global
 * sentinel and calls FUN_00626950 with the appropriate arguments.
 * Otherwise, checks the sentinel and calls FUN_00626950 with param and 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void FUN_00626950(int param1, int param2);

__declspec(naked) void FUN_00553bc0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
mov     edx, dword ptr [esp + 0x04]
        mov     eax, edx
        sub     eax, 0x00
        push    esi
        mov     dword ptr [ecx + 0x8dc], edx
        jz      case_0_or_2
        sub     eax, 0x02
        jz      case_0_or_2

        /* param != 0 && param != 2 */
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        lea     eax, [ecx + 0x40]
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        jz      done
        mov     ecx, dword ptr [eax]
        push    0x00
        push    edx
        xor     ecx, 0x85739531
        call    FUN_00626950
        pop     esi
        ret     0x04

case_0_or_2:
        mov eax, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [eax]
        xor eax, dword ptr [DAT_007dab40]
        lea     esi, [eax + 0x40]
        mov     eax, dword ptr [esi]
        xor     eax, 0x85739531
        jz      done
        mov     ecx, dword ptr [ecx + 0x938]
        mov     eax, dword ptr [ecx + 0x08]
        test    eax, eax
        jz      push_zero
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [esi]
        push    eax
        push    edx
        xor     ecx, 0x85739531
        call    FUN_00626950
        pop     esi
        ret     0x04

push_zero:
        mov     ecx, dword ptr [esi]
        xor     eax, eax
        push    eax
        push    edx
        xor     ecx, 0x85739531
        call    FUN_00626950

done:
        pop     esi
        ret     0x04
    }


}
