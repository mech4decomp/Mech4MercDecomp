/*
 * MW4 Mercenaries decompilation
 * Function: func_00555870
 * VA: 0x00555870
 * Size: 100 bytes
 * Calling convention: __stdcall
 */

#include <windows.h>

void FUN_0061acf0(void);
void FUN_0061ad20(void);
void FUN_0054c4d0(void);

__declspec(naked) void func_00555870(void)
{
    __asm
    {
        push   esi
        mov    esi, ecx
        mov    eax, dword ptr [esi+0x384]
        mov    ecx, dword ptr [eax+0x10]
        shr    ecx, 0x13
        test   cl, 0x01
        jne    loc_5558C6

        mov    al, byte ptr [esi+0x589]
        test   al, al
        jne    loc_5558C6

        mov    al, byte ptr [esi+0x5AC]
        test   al, al
        jne    loc_5558C6

        push   0x8000
        call   FUN_0061acf0
        mov    ecx, eax
        call   FUN_0061ad20
        test   al, al
        je     loc_5558C6

        mov    edx, dword ptr [esp+0x08]
        mov    eax, dword ptr [edx+0x10]
        test   eax, eax
        jle    loc_5558C6

        mov    ecx, dword ptr [esi+0xE0]
        mov    eax, dword ptr [ecx]
        push   0
        push   2
        call   dword ptr [eax+0x04]
        push   6
        mov    ecx, esi
        call   FUN_0054c4d0

loc_5558C6:
        pop    esi
        ret    4
    }
}
