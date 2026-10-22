/*
 * MW4 Mercenaries decompilation
 * Function: func_00553f20
 * VA: 0x00553F20
 * Size: 111 bytes
 * Calling convention: __thiscall
 */

__declspec(naked) void __stdcall func_00553f20(void)
{
    extern void __cdecl FUN_00553db0(void);
    extern void __cdecl FUN_00707e70(void);
    extern void __cdecl FUN_00553f90(void);
    __asm {
        push esi
        push edi
        mov  edi, [esp+0x14]
        mov  esi, ecx
        mov  eax, [esi+edi*4+0x8E0]
        sub  eax, 0
        je   case_0
        dec  eax
        jne  default_tail
        mov  ecx, [esp+0x10]
        mov  edx, [esp+0xC]
        lea  eax, [esi+edi*8+0x8FC]
        push eax
        push ecx
        push edx
        mov  ecx, esi
        call FUN_00553db0
        push 0
        call FUN_00707e70
        fstp dword ptr [esi+edi*4+0x954]
        pop  edi
        pop  esi
        ret  0xC
case_0:
        mov  eax, [esi+edi*4+0x938]
        mov  ecx, [esp+0x10]
        mov  edx, [esp+0xC]
        push eax
        push ecx
        push edx
        mov  ecx, esi
        call FUN_00553f90
default_tail:
        push 0
        call FUN_00707e70
        fstp dword ptr [esi+edi*4+0x954]
        pop  edi
        pop  esi
        ret  0xC
    }
}
