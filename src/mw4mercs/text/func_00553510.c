/*
 * MW4 Mercenaries decompilation
 * Function: func_00553510
 * VA: 0x00553510
 * Size: 110 bytes
 * Calling convention: __thiscall
 */

__declspec(naked) void __stdcall func_00553510(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_00629238(void);
__asm {
        mov eax, dword ptr [DAT_007dab44]
        mov  eax, [eax]
        push esi
        mov  esi, ecx
        xor eax, dword ptr [DAT_007dab40]
        mov  ecx, [eax+0x40]
        xor  ecx, 0x85739531
        je   check_alt
        mov  edx, [eax+0x40]
        xor  edx, 0x85739531
        mov  ecx, [edx+0x50]
        mov  dl, [ecx+0x28]
        test dl, dl
        je   check_alt2
        xor  al, al
        pop  esi
        ret
check_alt2:
        mov  ecx, [eax+0x40]
        push 0x12
        xor  ecx, 0x85739531
        call FUN_00629238
        test al, al
        je   check_alt
        xor  al, al
        pop  esi
        ret
check_alt:
        mov  eax, [esi+0x564]
        cmp  eax, 4
        je   check_flag
        test eax, eax
        jne  return_false
check_flag:
        mov  al, [esi+0x589]
        test al, al
        jne  return_false
        mov  eax, 1
        pop  esi
        ret
return_false:
        xor  eax, eax
        pop  esi
        ret
    }


}
