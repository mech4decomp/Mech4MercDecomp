/*
 * FUN_00553c60 (179 B) — __thiscall, RET 4.
 *
 * Manages a state array at this+0x8e0 indexed by param.
 * If state == 0: set to 1, check sentinel, call FUN_00626950(1,0).
 * If state == 1: set to 0, check sentinel, call FUN_00626950(0, val).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void FUN_00626950(int param1, int param2);

__declspec(naked) void FUN_00553c60(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
mov     eax, dword ptr [esp + 0x04]
        mov     edx, dword ptr [ecx + eax*4 + 0x8e0]
        sub     edx, 0x00
        jz      state_zero
        dec     edx
        jnz     done

        /* state == 1 */
        mov edx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [edx]
        push    esi
        xor edx, dword ptr [DAT_007dab40]
        mov     esi, dword ptr [edx + 0x40]
        add     edx, 0x40
        xor     esi, 0x85739531
        mov     dword ptr [ecx + eax*4 + 0x8e0], 0x00
        pop     esi
        jz      done

        mov     eax, dword ptr [ecx + eax*4 + 0x938]
        mov     eax, dword ptr [eax + 0x08]
        test    eax, eax
        jz      push_zero_zero
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [edx]
        push    eax
        push    0x00
        xor     ecx, 0x85739531
        call    FUN_00626950
        ret     0x04

push_zero_zero:
        mov     ecx, dword ptr [edx]
        xor     eax, eax
        push    eax
        push    eax
        xor     ecx, 0x85739531
        call    FUN_00626950
        ret     0x04

state_zero:
        mov edx, dword ptr [DAT_007dab40]
        mov     dword ptr [ecx + eax*4 + 0x8e0], 0x01
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x40]
        xor     edx, 0x85739531
        lea     eax, [ecx + 0x40]
        jz      done
        mov     ecx, dword ptr [eax]
        push    0x00
        push    0x01
        xor     ecx, 0x85739531
        call    FUN_00626950

done:
        ret     0x04
    }


}
