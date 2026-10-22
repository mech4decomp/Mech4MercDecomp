/*
 * MW4 Mercenaries decompilation
 * Function: func_00552780
 * VA: 0x00552780
 * Size: 114 bytes
 * Calling convention: __thiscall
 */

__declspec(naked) void __stdcall func_00552780(void)
{
    

extern int DAT_007f2548;
extern void __cdecl FUN_100415224(void);
extern void __cdecl FUN_005ef7d9(void);
extern void __cdecl FUN_10041fd3b(void);
extern void __cdecl FUN_10055264c(void);
extern float DAT_0076c5b0;
__asm {
        mov eax, dword ptr [DAT_007f2548]
        push esi
        push edi
        mov  edi, [esp+0xC]
        mov  esi, ecx
        mov  ecx, [edi+4]
        push eax
        call FUN_100415224
        test al, al
        je   use_default
        mov  ecx, edi
        call FUN_005ef7d9
        test al, al
        je   use_default
        mov  eax, [edi+0xE0]
        cmp  dword ptr [eax+0x14], 5
        je   use_default
        mov  edx, [edi+0x78]
        lea  ecx, [edi+0x78]
        call dword ptr [edx+4]
        mov  eax, [eax+0x94]
        lea  ecx, [esi+0x680]
        mov  [esp+0xC], eax
        call FUN_10041fd3b
        mov  ecx, [esi+0x384]
        push eax
        push ecx
        mov  ecx, esi
        call FUN_10055264c
        fmul dword ptr [esp+0xC]
        pop  edi
        pop  esi
        ret  4
use_default:
        fld dword ptr [DAT_0076c5b0]
        pop  edi
        pop  esi
        ret  4
    }


}
